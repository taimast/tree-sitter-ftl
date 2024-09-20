#include "tree_sitter/parser.h"

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 22
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 26
#define ALIAS_COUNT 0
#define TOKEN_COUNT 15
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 3
#define MAX_ALIAS_SEQUENCE_LENGTH 4
#define PRODUCTION_ID_COUNT 3

enum ts_symbol_identifiers {
  sym_comment = 1,
  sym_blank_line = 2,
  anon_sym_EQ = 3,
  anon_sym_LF = 4,
  sym_identifier = 5,
  sym_text = 6,
  anon_sym_LBRACE = 7,
  anon_sym_RBRACE = 8,
  anon_sym_DOLLAR = 9,
  sym_number_literal = 10,
  anon_sym_DQUOTE = 11,
  aux_sym_string_literal_token1 = 12,
  sym_escape_sequence = 13,
  sym_line_break = 14,
  sym_source_file = 15,
  sym__entry = 16,
  sym_message = 17,
  sym_message_value = 18,
  sym_placeable = 19,
  sym_expression = 20,
  sym_variable_reference = 21,
  sym_string_literal = 22,
  aux_sym_source_file_repeat1 = 23,
  aux_sym_message_value_repeat1 = 24,
  aux_sym_string_literal_repeat1 = 25,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [sym_comment] = "comment",
  [sym_blank_line] = "blank_line",
  [anon_sym_EQ] = "=",
  [anon_sym_LF] = "\n",
  [sym_identifier] = "identifier",
  [sym_text] = "text",
  [anon_sym_LBRACE] = "{",
  [anon_sym_RBRACE] = "}",
  [anon_sym_DOLLAR] = "$",
  [sym_number_literal] = "number_literal",
  [anon_sym_DQUOTE] = "\"",
  [aux_sym_string_literal_token1] = "string_literal_token1",
  [sym_escape_sequence] = "escape_sequence",
  [sym_line_break] = "line_break",
  [sym_source_file] = "source_file",
  [sym__entry] = "_entry",
  [sym_message] = "message",
  [sym_message_value] = "message_value",
  [sym_placeable] = "placeable",
  [sym_expression] = "expression",
  [sym_variable_reference] = "variable_reference",
  [sym_string_literal] = "string_literal",
  [aux_sym_source_file_repeat1] = "source_file_repeat1",
  [aux_sym_message_value_repeat1] = "message_value_repeat1",
  [aux_sym_string_literal_repeat1] = "string_literal_repeat1",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [sym_comment] = sym_comment,
  [sym_blank_line] = sym_blank_line,
  [anon_sym_EQ] = anon_sym_EQ,
  [anon_sym_LF] = anon_sym_LF,
  [sym_identifier] = sym_identifier,
  [sym_text] = sym_text,
  [anon_sym_LBRACE] = anon_sym_LBRACE,
  [anon_sym_RBRACE] = anon_sym_RBRACE,
  [anon_sym_DOLLAR] = anon_sym_DOLLAR,
  [sym_number_literal] = sym_number_literal,
  [anon_sym_DQUOTE] = anon_sym_DQUOTE,
  [aux_sym_string_literal_token1] = aux_sym_string_literal_token1,
  [sym_escape_sequence] = sym_escape_sequence,
  [sym_line_break] = sym_line_break,
  [sym_source_file] = sym_source_file,
  [sym__entry] = sym__entry,
  [sym_message] = sym_message,
  [sym_message_value] = sym_message_value,
  [sym_placeable] = sym_placeable,
  [sym_expression] = sym_expression,
  [sym_variable_reference] = sym_variable_reference,
  [sym_string_literal] = sym_string_literal,
  [aux_sym_source_file_repeat1] = aux_sym_source_file_repeat1,
  [aux_sym_message_value_repeat1] = aux_sym_message_value_repeat1,
  [aux_sym_string_literal_repeat1] = aux_sym_string_literal_repeat1,
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
  [sym_blank_line] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LF] = {
    .visible = true,
    .named = false,
  },
  [sym_identifier] = {
    .visible = true,
    .named = true,
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
  [anon_sym_DOLLAR] = {
    .visible = true,
    .named = false,
  },
  [sym_number_literal] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_DQUOTE] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_string_literal_token1] = {
    .visible = false,
    .named = false,
  },
  [sym_escape_sequence] = {
    .visible = true,
    .named = true,
  },
  [sym_line_break] = {
    .visible = true,
    .named = true,
  },
  [sym_source_file] = {
    .visible = true,
    .named = true,
  },
  [sym__entry] = {
    .visible = false,
    .named = true,
  },
  [sym_message] = {
    .visible = true,
    .named = true,
  },
  [sym_message_value] = {
    .visible = true,
    .named = true,
  },
  [sym_placeable] = {
    .visible = true,
    .named = true,
  },
  [sym_expression] = {
    .visible = true,
    .named = true,
  },
  [sym_variable_reference] = {
    .visible = true,
    .named = true,
  },
  [sym_string_literal] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_source_file_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_message_value_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_string_literal_repeat1] = {
    .visible = false,
    .named = false,
  },
};

enum ts_field_identifiers {
  field_expression = 1,
  field_id = 2,
  field_value = 3,
};

static const char * const ts_field_names[] = {
  [0] = NULL,
  [field_expression] = "expression",
  [field_id] = "id",
  [field_value] = "value",
};

static const TSFieldMapSlice ts_field_map_slices[PRODUCTION_ID_COUNT] = {
  [1] = {.index = 0, .length = 2},
  [2] = {.index = 2, .length = 1},
};

static const TSFieldMapEntry ts_field_map_entries[] = {
  [0] =
    {field_id, 0},
    {field_value, 2},
  [2] =
    {field_expression, 1},
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
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(13);
      ADVANCE_MAP(
        '\n', 17,
        '\r', 1,
        '"', 28,
        '#', 14,
        '$', 25,
        '=', 16,
        '\\', 4,
        '{', 23,
        '}', 24,
      );
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(10);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(26);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(18);
      END_STATE();
    case 1:
      if (lookahead == '\n') ADVANCE(15);
      END_STATE();
    case 2:
      if (lookahead == '\n') ADVANCE(32);
      if (lookahead == '{') ADVANCE(23);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(20);
      if (lookahead != 0) ADVANCE(22);
      END_STATE();
    case 3:
      if (lookahead == '"') ADVANCE(28);
      if (lookahead == '\\') ADVANCE(4);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(29);
      if (lookahead != 0) ADVANCE(30);
      END_STATE();
    case 4:
      ADVANCE_MAP(
        'u', 9,
        '"', 31,
        '/', 31,
        '\\', 31,
        'b', 31,
        'f', 31,
        'n', 31,
        'r', 31,
        't', 31,
      );
      END_STATE();
    case 5:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(27);
      END_STATE();
    case 6:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(31);
      END_STATE();
    case 7:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(6);
      END_STATE();
    case 8:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(7);
      END_STATE();
    case 9:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(8);
      END_STATE();
    case 10:
      if (eof) ADVANCE(13);
      ADVANCE_MAP(
        '\n', 17,
        '\r', 1,
        '"', 28,
        '#', 14,
        '$', 25,
        '=', 16,
        '{', 23,
        '}', 24,
      );
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(10);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(26);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(18);
      END_STATE();
    case 11:
      if (eof) ADVANCE(13);
      if (lookahead == '\n') ADVANCE(17);
      if (lookahead == '\r') ADVANCE(22);
      if (lookahead == '#') ADVANCE(22);
      if (lookahead == '{') ADVANCE(23);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(19);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(21);
      if (lookahead != 0) ADVANCE(22);
      END_STATE();
    case 12:
      if (eof) ADVANCE(13);
      if (lookahead == '\n') ADVANCE(15);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '#') ADVANCE(14);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(12);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(18);
      END_STATE();
    case 13:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 14:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(14);
      END_STATE();
    case 15:
      ACCEPT_TOKEN(sym_blank_line);
      END_STATE();
    case 16:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 17:
      ACCEPT_TOKEN(anon_sym_LF);
      END_STATE();
    case 18:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(18);
      END_STATE();
    case 19:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == '\r') ADVANCE(22);
      if (lookahead == '#') ADVANCE(22);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(19);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(21);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          (lookahead < 'a' || '{' < lookahead)) ADVANCE(22);
      END_STATE();
    case 20:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(20);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '{') ADVANCE(22);
      END_STATE();
    case 21:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(21);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          (lookahead < 'a' || '{' < lookahead)) ADVANCE(22);
      END_STATE();
    case 22:
      ACCEPT_TOKEN(sym_text);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '{') ADVANCE(22);
      END_STATE();
    case 23:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 24:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 25:
      ACCEPT_TOKEN(anon_sym_DOLLAR);
      END_STATE();
    case 26:
      ACCEPT_TOKEN(sym_number_literal);
      if (lookahead == '.') ADVANCE(5);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(26);
      END_STATE();
    case 27:
      ACCEPT_TOKEN(sym_number_literal);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(27);
      END_STATE();
    case 28:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 29:
      ACCEPT_TOKEN(aux_sym_string_literal_token1);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(29);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(30);
      END_STATE();
    case 30:
      ACCEPT_TOKEN(aux_sym_string_literal_token1);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(30);
      END_STATE();
    case 31:
      ACCEPT_TOKEN(sym_escape_sequence);
      END_STATE();
    case 32:
      ACCEPT_TOKEN(sym_line_break);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 12},
  [2] = {.lex_state = 11},
  [3] = {.lex_state = 11},
  [4] = {.lex_state = 11},
  [5] = {.lex_state = 12},
  [6] = {.lex_state = 12},
  [7] = {.lex_state = 2},
  [8] = {.lex_state = 0},
  [9] = {.lex_state = 0},
  [10] = {.lex_state = 3},
  [11] = {.lex_state = 12},
  [12] = {.lex_state = 3},
  [13] = {.lex_state = 3},
  [14] = {.lex_state = 0},
  [15] = {.lex_state = 0},
  [16] = {.lex_state = 0},
  [17] = {.lex_state = 0},
  [18] = {.lex_state = 0},
  [19] = {.lex_state = 0},
  [20] = {.lex_state = 0},
  [21] = {.lex_state = 0},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [sym_comment] = ACTIONS(1),
    [sym_blank_line] = ACTIONS(1),
    [anon_sym_EQ] = ACTIONS(1),
    [anon_sym_LF] = ACTIONS(1),
    [sym_identifier] = ACTIONS(1),
    [anon_sym_LBRACE] = ACTIONS(1),
    [anon_sym_RBRACE] = ACTIONS(1),
    [anon_sym_DOLLAR] = ACTIONS(1),
    [sym_number_literal] = ACTIONS(1),
    [anon_sym_DQUOTE] = ACTIONS(1),
    [sym_escape_sequence] = ACTIONS(1),
    [sym_line_break] = ACTIONS(1),
  },
  [1] = {
    [sym_source_file] = STATE(20),
    [sym__entry] = STATE(5),
    [sym_message] = STATE(5),
    [aux_sym_source_file_repeat1] = STATE(5),
    [ts_builtin_sym_end] = ACTIONS(3),
    [sym_comment] = ACTIONS(5),
    [sym_blank_line] = ACTIONS(5),
    [sym_identifier] = ACTIONS(7),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 6,
    ACTIONS(9), 1,
      ts_builtin_sym_end,
    ACTIONS(13), 1,
      sym_text,
    ACTIONS(15), 1,
      anon_sym_LBRACE,
    ACTIONS(17), 1,
      sym_line_break,
    STATE(3), 2,
      sym_placeable,
      aux_sym_message_value_repeat1,
    ACTIONS(11), 4,
      sym_comment,
      sym_blank_line,
      anon_sym_LF,
      sym_identifier,
  [23] = 6,
    ACTIONS(19), 1,
      ts_builtin_sym_end,
    ACTIONS(23), 1,
      sym_text,
    ACTIONS(26), 1,
      anon_sym_LBRACE,
    ACTIONS(29), 1,
      sym_line_break,
    STATE(3), 2,
      sym_placeable,
      aux_sym_message_value_repeat1,
    ACTIONS(21), 4,
      sym_comment,
      sym_blank_line,
      anon_sym_LF,
      sym_identifier,
  [46] = 2,
    ACTIONS(32), 2,
      ts_builtin_sym_end,
      sym_text,
    ACTIONS(34), 6,
      sym_comment,
      sym_blank_line,
      anon_sym_LF,
      sym_identifier,
      anon_sym_LBRACE,
      sym_line_break,
  [59] = 4,
    ACTIONS(7), 1,
      sym_identifier,
    ACTIONS(36), 1,
      ts_builtin_sym_end,
    ACTIONS(38), 2,
      sym_comment,
      sym_blank_line,
    STATE(6), 3,
      sym__entry,
      sym_message,
      aux_sym_source_file_repeat1,
  [75] = 4,
    ACTIONS(40), 1,
      ts_builtin_sym_end,
    ACTIONS(45), 1,
      sym_identifier,
    ACTIONS(42), 2,
      sym_comment,
      sym_blank_line,
    STATE(6), 3,
      sym__entry,
      sym_message,
      aux_sym_source_file_repeat1,
  [91] = 5,
    ACTIONS(15), 1,
      anon_sym_LBRACE,
    ACTIONS(48), 1,
      sym_text,
    ACTIONS(50), 1,
      sym_line_break,
    STATE(9), 1,
      sym_message_value,
    STATE(2), 2,
      sym_placeable,
      aux_sym_message_value_repeat1,
  [108] = 5,
    ACTIONS(52), 1,
      anon_sym_DOLLAR,
    ACTIONS(54), 1,
      sym_number_literal,
    ACTIONS(56), 1,
      anon_sym_DQUOTE,
    STATE(16), 1,
      sym_expression,
    STATE(15), 2,
      sym_variable_reference,
      sym_string_literal,
  [125] = 3,
    ACTIONS(60), 1,
      sym_blank_line,
    ACTIONS(62), 1,
      anon_sym_LF,
    ACTIONS(58), 3,
      ts_builtin_sym_end,
      sym_comment,
      sym_identifier,
  [137] = 3,
    ACTIONS(64), 1,
      anon_sym_DQUOTE,
    STATE(12), 1,
      aux_sym_string_literal_repeat1,
    ACTIONS(66), 2,
      aux_sym_string_literal_token1,
      sym_escape_sequence,
  [148] = 1,
    ACTIONS(68), 4,
      ts_builtin_sym_end,
      sym_comment,
      sym_blank_line,
      sym_identifier,
  [155] = 3,
    ACTIONS(70), 1,
      anon_sym_DQUOTE,
    STATE(13), 1,
      aux_sym_string_literal_repeat1,
    ACTIONS(72), 2,
      aux_sym_string_literal_token1,
      sym_escape_sequence,
  [166] = 3,
    ACTIONS(74), 1,
      anon_sym_DQUOTE,
    STATE(13), 1,
      aux_sym_string_literal_repeat1,
    ACTIONS(76), 2,
      aux_sym_string_literal_token1,
      sym_escape_sequence,
  [177] = 1,
    ACTIONS(79), 1,
      sym_identifier,
  [181] = 1,
    ACTIONS(81), 1,
      anon_sym_RBRACE,
  [185] = 1,
    ACTIONS(83), 1,
      anon_sym_RBRACE,
  [189] = 1,
    ACTIONS(85), 1,
      anon_sym_EQ,
  [193] = 1,
    ACTIONS(87), 1,
      anon_sym_RBRACE,
  [197] = 1,
    ACTIONS(89), 1,
      anon_sym_RBRACE,
  [201] = 1,
    ACTIONS(91), 1,
      ts_builtin_sym_end,
  [205] = 1,
    ACTIONS(93), 1,
      anon_sym_RBRACE,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 23,
  [SMALL_STATE(4)] = 46,
  [SMALL_STATE(5)] = 59,
  [SMALL_STATE(6)] = 75,
  [SMALL_STATE(7)] = 91,
  [SMALL_STATE(8)] = 108,
  [SMALL_STATE(9)] = 125,
  [SMALL_STATE(10)] = 137,
  [SMALL_STATE(11)] = 148,
  [SMALL_STATE(12)] = 155,
  [SMALL_STATE(13)] = 166,
  [SMALL_STATE(14)] = 177,
  [SMALL_STATE(15)] = 181,
  [SMALL_STATE(16)] = 185,
  [SMALL_STATE(17)] = 189,
  [SMALL_STATE(18)] = 193,
  [SMALL_STATE(19)] = 197,
  [SMALL_STATE(20)] = 201,
  [SMALL_STATE(21)] = 205,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0, 0, 0),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [9] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_message_value, 1, 0, 0),
  [11] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_message_value, 1, 0, 0),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [15] = {.entry = {.count = 1, .reusable = false}}, SHIFT(8),
  [17] = {.entry = {.count = 1, .reusable = false}}, SHIFT(3),
  [19] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_message_value_repeat1, 2, 0, 0),
  [21] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_message_value_repeat1, 2, 0, 0),
  [23] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_message_value_repeat1, 2, 0, 0), SHIFT_REPEAT(3),
  [26] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_message_value_repeat1, 2, 0, 0), SHIFT_REPEAT(8),
  [29] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_message_value_repeat1, 2, 0, 0), SHIFT_REPEAT(3),
  [32] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_placeable, 3, 0, 2),
  [34] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_placeable, 3, 0, 2),
  [36] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1, 0, 0),
  [38] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [40] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0),
  [42] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(6),
  [45] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(17),
  [48] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [50] = {.entry = {.count = 1, .reusable = false}}, SHIFT(2),
  [52] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [54] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [56] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [58] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_message, 3, 0, 1),
  [60] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_message, 3, 0, 1),
  [62] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [64] = {.entry = {.count = 1, .reusable = false}}, SHIFT(19),
  [66] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [68] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_message, 4, 0, 1),
  [70] = {.entry = {.count = 1, .reusable = false}}, SHIFT(21),
  [72] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [74] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_string_literal_repeat1, 2, 0, 0),
  [76] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_string_literal_repeat1, 2, 0, 0), SHIFT_REPEAT(13),
  [79] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [81] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expression, 1, 0, 0),
  [83] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [85] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [87] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable_reference, 2, 0, 0),
  [89] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string_literal, 2, 0, 0),
  [91] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [93] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string_literal, 3, 0, 0),
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

TS_PUBLIC const TSLanguage *tree_sitter_ftl(void) {
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
    .field_names = ts_field_names,
    .field_map_slices = ts_field_map_slices,
    .field_map_entries = ts_field_map_entries,
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
