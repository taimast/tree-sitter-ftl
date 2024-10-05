#include "tree_sitter/parser.h"

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 28
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 26
#define ALIAS_COUNT 0
#define TOKEN_COUNT 13
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 3
#define PRODUCTION_ID_COUNT 1

enum ts_symbol_identifiers {
  sym_comment = 1,
  aux_sym_message_identifier_token1 = 2,
  aux_sym_message_identifier_token2 = 3,
  sym_text = 4,
  anon_sym_LBRACE = 5,
  anon_sym_RBRACE = 6,
  sym_placeable_reference_or_number = 7,
  aux_sym_placeable_function_token1 = 8,
  anon_sym_RPAREN = 9,
  anon_sym_COMMA = 10,
  anon_sym_DQUOTE = 11,
  aux_sym_placeable_string_token1 = 12,
  sym_document = 13,
  sym_message = 14,
  sym_message_identifier = 15,
  sym_message_content = 16,
  sym_placeable = 17,
  sym_placeable_content = 18,
  sym_placeable_function = 19,
  sym_function_arguments = 20,
  sym_function_argument = 21,
  sym_placeable_string = 22,
  aux_sym_document_repeat1 = 23,
  aux_sym_message_content_repeat1 = 24,
  aux_sym_function_arguments_repeat1 = 25,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [sym_comment] = "comment",
  [aux_sym_message_identifier_token1] = "message_identifier_token1",
  [aux_sym_message_identifier_token2] = "message_identifier_token2",
  [sym_text] = "text",
  [anon_sym_LBRACE] = "{",
  [anon_sym_RBRACE] = "}",
  [sym_placeable_reference_or_number] = "placeable_reference_or_number",
  [aux_sym_placeable_function_token1] = "placeable_function_token1",
  [anon_sym_RPAREN] = ")",
  [anon_sym_COMMA] = ",",
  [anon_sym_DQUOTE] = "\"",
  [aux_sym_placeable_string_token1] = "placeable_string_token1",
  [sym_document] = "document",
  [sym_message] = "message",
  [sym_message_identifier] = "message_identifier",
  [sym_message_content] = "message_content",
  [sym_placeable] = "placeable",
  [sym_placeable_content] = "placeable_content",
  [sym_placeable_function] = "placeable_function",
  [sym_function_arguments] = "function_arguments",
  [sym_function_argument] = "function_argument",
  [sym_placeable_string] = "placeable_string",
  [aux_sym_document_repeat1] = "document_repeat1",
  [aux_sym_message_content_repeat1] = "message_content_repeat1",
  [aux_sym_function_arguments_repeat1] = "function_arguments_repeat1",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [sym_comment] = sym_comment,
  [aux_sym_message_identifier_token1] = aux_sym_message_identifier_token1,
  [aux_sym_message_identifier_token2] = aux_sym_message_identifier_token2,
  [sym_text] = sym_text,
  [anon_sym_LBRACE] = anon_sym_LBRACE,
  [anon_sym_RBRACE] = anon_sym_RBRACE,
  [sym_placeable_reference_or_number] = sym_placeable_reference_or_number,
  [aux_sym_placeable_function_token1] = aux_sym_placeable_function_token1,
  [anon_sym_RPAREN] = anon_sym_RPAREN,
  [anon_sym_COMMA] = anon_sym_COMMA,
  [anon_sym_DQUOTE] = anon_sym_DQUOTE,
  [aux_sym_placeable_string_token1] = aux_sym_placeable_string_token1,
  [sym_document] = sym_document,
  [sym_message] = sym_message,
  [sym_message_identifier] = sym_message_identifier,
  [sym_message_content] = sym_message_content,
  [sym_placeable] = sym_placeable,
  [sym_placeable_content] = sym_placeable_content,
  [sym_placeable_function] = sym_placeable_function,
  [sym_function_arguments] = sym_function_arguments,
  [sym_function_argument] = sym_function_argument,
  [sym_placeable_string] = sym_placeable_string,
  [aux_sym_document_repeat1] = aux_sym_document_repeat1,
  [aux_sym_message_content_repeat1] = aux_sym_message_content_repeat1,
  [aux_sym_function_arguments_repeat1] = aux_sym_function_arguments_repeat1,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [sym_comment] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_message_identifier_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_message_identifier_token2] = {
    .visible = false,
    .named = false,
  },
  [sym_text] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_LBRACE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RBRACE] = {
    .visible = true,
    .named = false,
  },
  [sym_placeable_reference_or_number] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_placeable_function_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_RPAREN] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COMMA] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DQUOTE] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_placeable_string_token1] = {
    .visible = false,
    .named = false,
  },
  [sym_document] = {
    .visible = true,
    .named = true,
  },
  [sym_message] = {
    .visible = true,
    .named = true,
  },
  [sym_message_identifier] = {
    .visible = true,
    .named = true,
  },
  [sym_message_content] = {
    .visible = true,
    .named = true,
  },
  [sym_placeable] = {
    .visible = true,
    .named = true,
  },
  [sym_placeable_content] = {
    .visible = true,
    .named = true,
  },
  [sym_placeable_function] = {
    .visible = true,
    .named = true,
  },
  [sym_function_arguments] = {
    .visible = true,
    .named = true,
  },
  [sym_function_argument] = {
    .visible = true,
    .named = true,
  },
  [sym_placeable_string] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_document_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_message_content_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_function_arguments_repeat1] = {
    .visible = false,
    .named = false,
  },
};

static const TSSymbol ts_alias_sequences[PRODUCTION_ID_COUNT][MAX_ALIAS_SEQUENCE_LENGTH] = {
  [0] = {0},
};

static const uint16_t ts_non_terminal_alias_map[] = {
  0,
};

static const TSStateId ts_primary_state_ids[STATE_COUNT] = {
  [0] = 0,
  [1] = 1,
  [2] = 2,
  [3] = 3,
  [4] = 4,
  [5] = 5,
  [6] = 6,
  [7] = 7,
  [8] = 8,
  [9] = 9,
  [10] = 10,
  [11] = 11,
  [12] = 12,
  [13] = 13,
  [14] = 14,
  [15] = 15,
  [16] = 16,
  [17] = 17,
  [18] = 18,
  [19] = 19,
  [20] = 20,
  [21] = 21,
  [22] = 22,
  [23] = 23,
  [24] = 24,
  [25] = 25,
  [26] = 26,
  [27] = 27,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(10);
      ADVANCE_MAP(
        '"', 40,
        '#', 16,
        '$', 7,
        ')', 37,
        ',', 39,
        '-', 5,
        '=', 23,
        '{', 31,
        '}', 32,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(3);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(34);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(20);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(21);
      END_STATE();
    case 1:
      if (lookahead == '\n') SKIP(1);
      if (lookahead == '"') ADVANCE(41);
      if (lookahead == '#') ADVANCE(17);
      if (lookahead == ')') ADVANCE(38);
      if (lookahead == '$' ||
          lookahead == '-') ADVANCE(29);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(24);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(27);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(29);
      if (lookahead != 0 &&
          (lookahead < 'a' || '{' < lookahead) &&
          lookahead != '}') ADVANCE(30);
      END_STATE();
    case 2:
      if (lookahead == '\n') SKIP(2);
      if (lookahead == '"') ADVANCE(41);
      if (lookahead == '#') ADVANCE(17);
      if (lookahead == '$' ||
          lookahead == '-') ADVANCE(29);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(25);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(27);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(29);
      if (lookahead != 0 &&
          (lookahead < 'a' || '{' < lookahead) &&
          lookahead != '}') ADVANCE(30);
      END_STATE();
    case 3:
      ADVANCE_MAP(
        '"', 40,
        '#', 16,
        '$', 7,
        ')', 37,
        ',', 39,
        '-', 5,
        '=', 23,
        '{', 31,
        '}', 32,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(3);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(34);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(20);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(21);
      END_STATE();
    case 4:
      if (lookahead == '#') ADVANCE(16);
      if (lookahead == '$' ||
          lookahead == '-') ADVANCE(7);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(4);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(34);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(33);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(35);
      END_STATE();
    case 5:
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(35);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(21);
      END_STATE();
    case 6:
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(21);
      END_STATE();
    case 7:
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(35);
      END_STATE();
    case 8:
      if (eof) ADVANCE(10);
      if (lookahead == '\n') SKIP(8);
      if (lookahead == '#') ADVANCE(17);
      if (lookahead == '-') ADVANCE(28);
      if (lookahead == '{') ADVANCE(31);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(26);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(22);
      if (lookahead != 0 &&
          lookahead != '}') ADVANCE(30);
      END_STATE();
    case 9:
      if (eof) ADVANCE(10);
      if (lookahead == '#') ADVANCE(16);
      if (lookahead == '-') ADVANCE(6);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(9);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(21);
      END_STATE();
    case 10:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 11:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead == '\n') ADVANCE(43);
      if (lookahead == '"') ADVANCE(19);
      if (lookahead == '#') ADVANCE(13);
      if (lookahead != 0) ADVANCE(13);
      END_STATE();
    case 12:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead == '\n') ADVANCE(43);
      if (lookahead == '"') ADVANCE(19);
      if (lookahead == '#') ADVANCE(11);
      if (lookahead != 0) ADVANCE(13);
      END_STATE();
    case 13:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead == '\n') ADVANCE(43);
      if (lookahead == '"') ADVANCE(19);
      if (lookahead != 0) ADVANCE(13);
      END_STATE();
    case 14:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead == '#') ADVANCE(19);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(19);
      END_STATE();
    case 15:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead == '#') ADVANCE(18);
      if (lookahead == '{' ||
          lookahead == '}') ADVANCE(19);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(18);
      END_STATE();
    case 16:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead == '#') ADVANCE(14);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(19);
      END_STATE();
    case 17:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead == '#') ADVANCE(15);
      if (lookahead == '{' ||
          lookahead == '}') ADVANCE(19);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(18);
      END_STATE();
    case 18:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead == '{' ||
          lookahead == '}') ADVANCE(19);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(18);
      END_STATE();
    case 19:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(19);
      END_STATE();
    case 20:
      ACCEPT_TOKEN(aux_sym_message_identifier_token1);
      if (lookahead == '(') ADVANCE(36);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(21);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(20);
      END_STATE();
    case 21:
      ACCEPT_TOKEN(aux_sym_message_identifier_token1);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(21);
      END_STATE();
    case 22:
      ACCEPT_TOKEN(aux_sym_message_identifier_token1);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(22);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          (lookahead < 'a' || '{' < lookahead) &&
          lookahead != '}') ADVANCE(30);
      END_STATE();
    case 23:
      ACCEPT_TOKEN(aux_sym_message_identifier_token2);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(23);
      END_STATE();
    case 24:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == '"') ADVANCE(41);
      if (lookahead == '#') ADVANCE(17);
      if (lookahead == ')') ADVANCE(38);
      if (lookahead == '$' ||
          lookahead == '-') ADVANCE(29);
      if (lookahead == '\t' ||
          (0x0b <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(24);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(27);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(29);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          (lookahead < 'a' || '{' < lookahead) &&
          lookahead != '}') ADVANCE(30);
      END_STATE();
    case 25:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == '"') ADVANCE(41);
      if (lookahead == '#') ADVANCE(17);
      if (lookahead == '$' ||
          lookahead == '-') ADVANCE(29);
      if (lookahead == '\t' ||
          (0x0b <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(25);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(27);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(29);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          (lookahead < 'a' || '{' < lookahead) &&
          lookahead != '}') ADVANCE(30);
      END_STATE();
    case 26:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == '#') ADVANCE(17);
      if (lookahead == '-') ADVANCE(28);
      if (lookahead == '\t' ||
          (0x0b <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(26);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(22);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          (lookahead < 'a' || '{' < lookahead) &&
          lookahead != '}') ADVANCE(30);
      END_STATE();
    case 27:
      ACCEPT_TOKEN(sym_text);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(27);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(30);
      END_STATE();
    case 28:
      ACCEPT_TOKEN(sym_text);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(22);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          (lookahead < 'a' || '{' < lookahead) &&
          lookahead != '}') ADVANCE(30);
      END_STATE();
    case 29:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(29);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          (lookahead < 'a' || '{' < lookahead) &&
          lookahead != '}') ADVANCE(30);
      END_STATE();
    case 30:
      ACCEPT_TOKEN(sym_text);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(30);
      END_STATE();
    case 31:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 32:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 33:
      ACCEPT_TOKEN(sym_placeable_reference_or_number);
      if (lookahead == '(') ADVANCE(36);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(35);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(33);
      END_STATE();
    case 34:
      ACCEPT_TOKEN(sym_placeable_reference_or_number);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(34);
      END_STATE();
    case 35:
      ACCEPT_TOKEN(sym_placeable_reference_or_number);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(35);
      END_STATE();
    case 36:
      ACCEPT_TOKEN(aux_sym_placeable_function_token1);
      END_STATE();
    case 37:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 38:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(30);
      END_STATE();
    case 39:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 40:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 41:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(30);
      END_STATE();
    case 42:
      ACCEPT_TOKEN(aux_sym_placeable_string_token1);
      if (lookahead == '#') ADVANCE(12);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(42);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '#') ADVANCE(43);
      END_STATE();
    case 43:
      ACCEPT_TOKEN(aux_sym_placeable_string_token1);
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(43);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 9},
  [2] = {.lex_state = 8},
  [3] = {.lex_state = 1},
  [4] = {.lex_state = 8},
  [5] = {.lex_state = 8},
  [6] = {.lex_state = 2},
  [7] = {.lex_state = 9},
  [8] = {.lex_state = 9},
  [9] = {.lex_state = 4},
  [10] = {.lex_state = 8},
  [11] = {.lex_state = 8},
  [12] = {.lex_state = 0},
  [13] = {.lex_state = 0},
  [14] = {.lex_state = 0},
  [15] = {.lex_state = 9},
  [16] = {.lex_state = 0},
  [17] = {.lex_state = 0},
  [18] = {.lex_state = 0},
  [19] = {.lex_state = 0},
  [20] = {.lex_state = 0},
  [21] = {.lex_state = 0},
  [22] = {.lex_state = 0},
  [23] = {.lex_state = 42},
  [24] = {.lex_state = 0},
  [25] = {.lex_state = 0},
  [26] = {.lex_state = 0},
  [27] = {.lex_state = 0},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [sym_comment] = ACTIONS(3),
    [aux_sym_message_identifier_token1] = ACTIONS(1),
    [aux_sym_message_identifier_token2] = ACTIONS(1),
    [anon_sym_LBRACE] = ACTIONS(1),
    [anon_sym_RBRACE] = ACTIONS(1),
    [sym_placeable_reference_or_number] = ACTIONS(1),
    [aux_sym_placeable_function_token1] = ACTIONS(1),
    [anon_sym_RPAREN] = ACTIONS(1),
    [anon_sym_COMMA] = ACTIONS(1),
    [anon_sym_DQUOTE] = ACTIONS(1),
  },
  [1] = {
    [sym_document] = STATE(27),
    [sym_message] = STATE(7),
    [sym_message_identifier] = STATE(2),
    [aux_sym_document_repeat1] = STATE(7),
    [ts_builtin_sym_end] = ACTIONS(5),
    [sym_comment] = ACTIONS(7),
    [aux_sym_message_identifier_token1] = ACTIONS(9),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 6,
    ACTIONS(11), 1,
      ts_builtin_sym_end,
    ACTIONS(15), 1,
      sym_text,
    ACTIONS(17), 1,
      anon_sym_LBRACE,
    STATE(15), 1,
      sym_message_content,
    ACTIONS(13), 2,
      sym_comment,
      aux_sym_message_identifier_token1,
    STATE(4), 2,
      sym_placeable,
      aux_sym_message_content_repeat1,
  [21] = 7,
    ACTIONS(19), 1,
      sym_comment,
    ACTIONS(23), 1,
      anon_sym_RPAREN,
    ACTIONS(25), 1,
      anon_sym_DQUOTE,
    STATE(12), 1,
      sym_function_argument,
    STATE(16), 1,
      sym_placeable_string,
    STATE(24), 1,
      sym_function_arguments,
    ACTIONS(21), 2,
      sym_text,
      sym_placeable_reference_or_number,
  [44] = 5,
    ACTIONS(17), 1,
      anon_sym_LBRACE,
    ACTIONS(27), 1,
      ts_builtin_sym_end,
    ACTIONS(31), 1,
      sym_text,
    ACTIONS(29), 2,
      sym_comment,
      aux_sym_message_identifier_token1,
    STATE(5), 2,
      sym_placeable,
      aux_sym_message_content_repeat1,
  [62] = 5,
    ACTIONS(33), 1,
      ts_builtin_sym_end,
    ACTIONS(37), 1,
      sym_text,
    ACTIONS(40), 1,
      anon_sym_LBRACE,
    ACTIONS(35), 2,
      sym_comment,
      aux_sym_message_identifier_token1,
    STATE(5), 2,
      sym_placeable,
      aux_sym_message_content_repeat1,
  [80] = 5,
    ACTIONS(19), 1,
      sym_comment,
    ACTIONS(25), 1,
      anon_sym_DQUOTE,
    STATE(16), 1,
      sym_placeable_string,
    STATE(18), 1,
      sym_function_argument,
    ACTIONS(21), 2,
      sym_text,
      sym_placeable_reference_or_number,
  [97] = 5,
    ACTIONS(9), 1,
      aux_sym_message_identifier_token1,
    ACTIONS(43), 1,
      ts_builtin_sym_end,
    ACTIONS(45), 1,
      sym_comment,
    STATE(2), 1,
      sym_message_identifier,
    STATE(8), 2,
      sym_message,
      aux_sym_document_repeat1,
  [114] = 5,
    ACTIONS(47), 1,
      ts_builtin_sym_end,
    ACTIONS(49), 1,
      sym_comment,
    ACTIONS(52), 1,
      aux_sym_message_identifier_token1,
    STATE(2), 1,
      sym_message_identifier,
    STATE(8), 2,
      sym_message,
      aux_sym_document_repeat1,
  [131] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(55), 1,
      sym_placeable_reference_or_number,
    ACTIONS(57), 1,
      aux_sym_placeable_function_token1,
    STATE(19), 1,
      sym_placeable_function,
    STATE(20), 1,
      sym_placeable_content,
  [147] = 2,
    ACTIONS(59), 1,
      ts_builtin_sym_end,
    ACTIONS(61), 4,
      sym_comment,
      aux_sym_message_identifier_token1,
      sym_text,
      anon_sym_LBRACE,
  [157] = 2,
    ACTIONS(63), 1,
      ts_builtin_sym_end,
    ACTIONS(65), 4,
      sym_comment,
      aux_sym_message_identifier_token1,
      sym_text,
      anon_sym_LBRACE,
  [167] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(67), 1,
      anon_sym_RPAREN,
    ACTIONS(69), 1,
      anon_sym_COMMA,
    STATE(13), 1,
      aux_sym_function_arguments_repeat1,
  [180] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(69), 1,
      anon_sym_COMMA,
    ACTIONS(71), 1,
      anon_sym_RPAREN,
    STATE(14), 1,
      aux_sym_function_arguments_repeat1,
  [193] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(73), 1,
      anon_sym_RPAREN,
    ACTIONS(75), 1,
      anon_sym_COMMA,
    STATE(14), 1,
      aux_sym_function_arguments_repeat1,
  [206] = 1,
    ACTIONS(78), 3,
      ts_builtin_sym_end,
      sym_comment,
      aux_sym_message_identifier_token1,
  [212] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(80), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [220] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(82), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [228] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(73), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [236] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(84), 1,
      anon_sym_RBRACE,
  [243] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(86), 1,
      anon_sym_RBRACE,
  [250] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(88), 1,
      aux_sym_message_identifier_token2,
  [257] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(90), 1,
      anon_sym_RBRACE,
  [264] = 2,
    ACTIONS(19), 1,
      sym_comment,
    ACTIONS(92), 1,
      aux_sym_placeable_string_token1,
  [271] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(94), 1,
      anon_sym_RPAREN,
  [278] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(96), 1,
      anon_sym_DQUOTE,
  [285] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(98), 1,
      anon_sym_RBRACE,
  [292] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(100), 1,
      ts_builtin_sym_end,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 21,
  [SMALL_STATE(4)] = 44,
  [SMALL_STATE(5)] = 62,
  [SMALL_STATE(6)] = 80,
  [SMALL_STATE(7)] = 97,
  [SMALL_STATE(8)] = 114,
  [SMALL_STATE(9)] = 131,
  [SMALL_STATE(10)] = 147,
  [SMALL_STATE(11)] = 157,
  [SMALL_STATE(12)] = 167,
  [SMALL_STATE(13)] = 180,
  [SMALL_STATE(14)] = 193,
  [SMALL_STATE(15)] = 206,
  [SMALL_STATE(16)] = 212,
  [SMALL_STATE(17)] = 220,
  [SMALL_STATE(18)] = 228,
  [SMALL_STATE(19)] = 236,
  [SMALL_STATE(20)] = 243,
  [SMALL_STATE(21)] = 250,
  [SMALL_STATE(22)] = 257,
  [SMALL_STATE(23)] = 264,
  [SMALL_STATE(24)] = 271,
  [SMALL_STATE(25)] = 278,
  [SMALL_STATE(26)] = 285,
  [SMALL_STATE(27)] = 292,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT_EXTRA(),
  [5] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_document, 0, 0, 0),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [11] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_message, 1, 0, 0),
  [13] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_message, 1, 0, 0),
  [15] = {.entry = {.count = 1, .reusable = false}}, SHIFT(4),
  [17] = {.entry = {.count = 1, .reusable = false}}, SHIFT(9),
  [19] = {.entry = {.count = 1, .reusable = false}}, SHIFT_EXTRA(),
  [21] = {.entry = {.count = 1, .reusable = false}}, SHIFT(16),
  [23] = {.entry = {.count = 1, .reusable = false}}, SHIFT(22),
  [25] = {.entry = {.count = 1, .reusable = false}}, SHIFT(23),
  [27] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_message_content, 1, 0, 0),
  [29] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_message_content, 1, 0, 0),
  [31] = {.entry = {.count = 1, .reusable = false}}, SHIFT(5),
  [33] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_message_content_repeat1, 2, 0, 0),
  [35] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_message_content_repeat1, 2, 0, 0),
  [37] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_message_content_repeat1, 2, 0, 0), SHIFT_REPEAT(5),
  [40] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_message_content_repeat1, 2, 0, 0), SHIFT_REPEAT(9),
  [43] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_document, 1, 0, 0),
  [45] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [47] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2, 0, 0),
  [49] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2, 0, 0), SHIFT_REPEAT(8),
  [52] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2, 0, 0), SHIFT_REPEAT(21),
  [55] = {.entry = {.count = 1, .reusable = false}}, SHIFT(19),
  [57] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [59] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_message_identifier, 2, 0, 0),
  [61] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_message_identifier, 2, 0, 0),
  [63] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_placeable, 3, 0, 0),
  [65] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_placeable, 3, 0, 0),
  [67] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_arguments, 1, 0, 0),
  [69] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [71] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_arguments, 2, 0, 0),
  [73] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_function_arguments_repeat1, 2, 0, 0),
  [75] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_function_arguments_repeat1, 2, 0, 0), SHIFT_REPEAT(6),
  [78] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_message, 2, 0, 0),
  [80] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_argument, 1, 0, 0),
  [82] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_placeable_string, 3, 0, 0),
  [84] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_placeable_content, 1, 0, 0),
  [86] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [88] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [90] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_placeable_function, 2, 0, 0),
  [92] = {.entry = {.count = 1, .reusable = false}}, SHIFT(25),
  [94] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [96] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [98] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_placeable_function, 3, 0, 0),
  [100] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
};

#ifdef __cplusplus
extern "C" {
#endif
#ifdef TREE_SITTER_HIDE_SYMBOLS
#define TS_PUBLIC
#elif defined(_WIN32)
#define TS_PUBLIC __declspec(dllexport)
#else
#define TS_PUBLIC __attribute__((visibility("default")))
#endif

TS_PUBLIC const TSLanguage *tree_sitter_fluent(void) {
  static const TSLanguage language = {
    .version = LANGUAGE_VERSION,
    .symbol_count = SYMBOL_COUNT,
    .alias_count = ALIAS_COUNT,
    .token_count = TOKEN_COUNT,
    .external_token_count = EXTERNAL_TOKEN_COUNT,
    .state_count = STATE_COUNT,
    .large_state_count = LARGE_STATE_COUNT,
    .production_id_count = PRODUCTION_ID_COUNT,
    .field_count = FIELD_COUNT,
    .max_alias_sequence_length = MAX_ALIAS_SEQUENCE_LENGTH,
    .parse_table = &ts_parse_table[0][0],
    .small_parse_table = ts_small_parse_table,
    .small_parse_table_map = ts_small_parse_table_map,
    .parse_actions = ts_parse_actions,
    .symbol_names = ts_symbol_names,
    .symbol_metadata = ts_symbol_metadata,
    .public_symbol_map = ts_symbol_map,
    .alias_map = ts_non_terminal_alias_map,
    .alias_sequences = &ts_alias_sequences[0][0],
    .lex_modes = ts_lex_modes,
    .lex_fn = ts_lex,
    .primary_state_ids = ts_primary_state_ids,
  };
  return &language;
}
#ifdef __cplusplus
}
#endif
