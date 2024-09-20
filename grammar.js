module.exports = grammar({
  name: "ftl",

  rules: {
    // Корневое правило
    document: ($) => repeat($.entry),

    entry: ($) => choice($.message, $.comment),

    // Правила для сообщений
    message: ($) => seq($.identifier, "=", $.message_value),

    identifier: ($) => /[a-zA-Z][a-zA-Z0-9_-]*/,

    message_value: ($) => repeat1(choice($.text, $.variable)),

    text: ($) => /[^{}]+/,

    // Измененное правило для переменной
    variable: ($) =>
      seq(
        "{",
        optional(/\s*/), // Допустимы пробелы после открывающей скобки
        "$",
        $.identifier,
        optional(/\s*/), // Допустимы пробелы перед закрывающей скобкой
        "}",
      ),

    // Правила для комментариев
    comment: ($) => token(seq("#", /.*/)),
  },

  // Указываем пробелы и переносы строк как допустимые символы
  extras: ($) => [/\s/],
});
