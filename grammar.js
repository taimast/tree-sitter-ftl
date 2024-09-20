module.exports = grammar({
  name: "ftl",

  extras: ($) => [/[ \t]/],

  rules: {
    source_file: ($) => repeat($._entry),

    _entry: ($) => choice($.message, $.comment, $.blank_line),

    comment: ($) => token(seq("#", /.*/)),

    blank_line: ($) => /\r?\n/,

    message: ($) =>
      seq(
        field("id", $.identifier),
        "=",
        field("value", $.message_value),
        optional("\n"),
      ),

    identifier: ($) => /[a-zA-Z][a-zA-Z0-9_-]*/,

    message_value: ($) => repeat1(choice($.text, $.placeable, $.line_break)),

    text: ($) => token(prec(1, /[^\n{]+/)),

    placeable: ($) => seq("{", field("expression", $.expression), "}"),

    expression: ($) =>
      choice($.variable_reference, $.number_literal, $.string_literal),

    variable_reference: ($) => seq("$", $.identifier),

    number_literal: ($) => /\d+(\.\d+)?/,

    string_literal: ($) =>
      seq(
        '"',
        repeat(choice(token.immediate(/[^"\\]+/), $.escape_sequence)),
        '"',
      ),

    escape_sequence: ($) =>
      token.immediate(seq("\\", choice(/["\\\/bfnrt]/, /u[0-9a-fA-F]{4}/))),

    line_break: ($) => /\n/,
  },
});
