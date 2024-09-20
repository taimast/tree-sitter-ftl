module.exports = grammar({
  name: "ftl",

  rules: {
    // Корневое правило
    document: ($) => repeat($.entry),

    entry: ($) => choice($.message, $.comment),

    // Определяем структуру сообщения
    message: ($) =>
      seq(
        $.identifier, // Идентификатор сообщения
        "=", // Символ присваивания значения
        $.message_value, // Значение сообщения
      ),

    identifier: ($) => /[a-zA-Z][a-zA-Z0-9_-]*/,

    // Обновленное определение message_value
    message_value: ($) => repeat1(choice($.text, $.variable)),

    // Определение текста и переменной
    text: ($) => /[^{}\n]+/, // Обновлено, чтобы исключить переводы строк

    // Переменная с пробелами внутри фигурных скобок
    variable: ($) =>
      seq("{", optional(/\s*/), "$", $.identifier, optional(/\s*/), "}"),

    // Правила для комментариев
    comment: ($) => token(seq("#", /.*/)),
  },

  // Указываем пробелы и переносы строк как допустимые символы
  extras: ($) => [/\s/],
});
