module.exports = grammar({
  name: "fluent",

  extras: ($) => [/\s/, $.comment],

  rules: {
    document: ($) => repeat(choice($.comment, $.message)),

    comment: ($) => token(seq(optional("##"), "#", /[^\n]*/)),

    message: ($) => seq($.message_identifier, optional($.message_content)),

    message_identifier: ($) => seq(/-?[a-zA-Z][a-zA-Z0-9_-]*/, /\s*=\s*/),

    message_content: ($) => repeat1(choice($.text, $.placeable)),

    text: ($) => /[^{}\n]+/,

    placeable: ($) => seq("{", $.placeable_content, "}"),

    placeable_content: ($) =>
      choice($.placeable_reference_or_number, $.placeable_function),

    placeable_reference_or_number: ($) =>
      token(choice(/(-|\$)[a-zA-Z0-9_-]+/, /[a-zA-Z][a-zA-Z0-9_-]*/, /\d+/)),

    placeable_function: ($) =>
      seq(/[A-Z][A-Z0-9_-]*\(/, optional($.function_arguments), ")"),

    function_arguments: ($) =>
      seq($.function_argument, repeat(seq(",", $.function_argument))),

    function_argument: ($) =>
      choice($.text, $.placeable_reference_or_number, $.placeable_string),

    placeable_string: ($) => seq('"', /[^"]*/, '"'),
  },
});
