#include "tree_sitter/parser.h"

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 22
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 16
#define ALIAS_COUNT 0
#define TOKEN_COUNT 9
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 6
#define PRODUCTION_ID_COUNT 1

enum ts_symbol_identifiers {
  anon_sym_EQ = 1,
  sym_identifier = 2,
  sym_text = 3,
  anon_sym_LBRACE = 4,
  aux_sym_variable_token1 = 5,
  anon_sym_DOLLAR = 6,
  anon_sym_RBRACE = 7,
  sym_comment = 8,
  sym_document = 9,
  sym_entry = 10,
  sym_message = 11,
  sym_message_value = 12,
  sym_variable = 13,
  aux_sym_document_repeat1 = 14,
  aux_sym_message_value_repeat1 = 15,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [anon_sym_EQ] = "=",
  [sym_identifier] = "identifier",
  [sym_text] = "text",
  [anon_sym_LBRACE] = "{",
  [aux_sym_variable_token1] = "variable_token1",
  [anon_sym_DOLLAR] = "$",
  [anon_sym_RBRACE] = "}",
  [sym_comment] = "comment",
  [sym_document] = "document",
  [sym_entry] = "entry",
  [sym_message] = "message",
  [sym_message_value] = "message_value",
  [sym_variable] = "variable",
  [aux_sym_document_repeat1] = "document_repeat1",
  [aux_sym_message_value_repeat1] = "message_value_repeat1",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [anon_sym_EQ] = anon_sym_EQ,
  [sym_identifier] = sym_identifier,
  [sym_text] = sym_text,
  [anon_sym_LBRACE] = anon_sym_LBRACE,
  [aux_sym_variable_token1] = aux_sym_variable_token1,
  [anon_sym_DOLLAR] = anon_sym_DOLLAR,
  [anon_sym_RBRACE] = anon_sym_RBRACE,
  [sym_comment] = sym_comment,
  [sym_document] = sym_document,
  [sym_entry] = sym_entry,
  [sym_message] = sym_message,
  [sym_message_value] = sym_message_value,
  [sym_variable] = sym_variable,
  [aux_sym_document_repeat1] = aux_sym_document_repeat1,
  [aux_sym_message_value_repeat1] = aux_sym_message_value_repeat1,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [anon_sym_EQ] = {
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
  [aux_sym_variable_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_DOLLAR] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RBRACE] = {
    .visible = true,
    .named = false,
  },
  [sym_comment] = {
    .visible = true,
    .named = true,
  },
  [sym_document] = {
    .visible = true,
    .named = true,
  },
  [sym_entry] = {
    .visible = true,
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
  [sym_variable] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_document_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_message_value_repeat1] = {
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
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(3);
      if (lookahead == '#') ADVANCE(15);
      if (lookahead == '$') ADVANCE(13);
      if (lookahead == '=') ADVANCE(4);
      if (lookahead == '{') ADVANCE(11);
      if (lookahead == '}') ADVANCE(14);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(0);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(5);
      END_STATE();
    case 1:
      if (lookahead == '{') ADVANCE(11);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(9);
      if (lookahead != 0 &&
          lookahead != '}') ADVANCE(10);
      END_STATE();
    case 2:
      if (eof) ADVANCE(3);
      if (lookahead == '#') ADVANCE(7);
      if (lookahead == '{') ADVANCE(11);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(8);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(6);
      if (lookahead != 0 &&
          lookahead != '}') ADVANCE(10);
      END_STATE();
    case 3:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 4:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 5:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(5);
      END_STATE();
    case 6:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(6);
      if (lookahead != 0 &&
          (lookahead < 'a' || '{' < lookahead) &&
          lookahead != '}') ADVANCE(10);
      END_STATE();
    case 7:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == '\n') ADVANCE(10);
      if (lookahead == '{' ||
          lookahead == '}') ADVANCE(15);
      if (lookahead != 0) ADVANCE(7);
      END_STATE();
    case 8:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == '#') ADVANCE(7);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(8);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(6);
      if (lookahead != 0 &&
          (lookahead < 'a' || '{' < lookahead) &&
          lookahead != '}') ADVANCE(10);
      END_STATE();
    case 9:
      ACCEPT_TOKEN(sym_text);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(9);
      if (lookahead != 0 &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(10);
      END_STATE();
    case 10:
      ACCEPT_TOKEN(sym_text);
      if (lookahead != 0 &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(10);
      END_STATE();
    case 11:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 12:
      ACCEPT_TOKEN(aux_sym_variable_token1);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(12);
      END_STATE();
    case 13:
      ACCEPT_TOKEN(anon_sym_DOLLAR);
      END_STATE();
    case 14:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 15:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(15);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 0},
  [2] = {.lex_state = 2},
  [3] = {.lex_state = 2},
  [4] = {.lex_state = 0},
  [5] = {.lex_state = 0},
  [6] = {.lex_state = 1},
  [7] = {.lex_state = 2},
  [8] = {.lex_state = 2},
  [9] = {.lex_state = 2},
  [10] = {.lex_state = 0},
  [11] = {.lex_state = 0},
  [12] = {.lex_state = 12},
  [13] = {.lex_state = 12},
  [14] = {.lex_state = 12},
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
    [anon_sym_EQ] = ACTIONS(1),
    [sym_identifier] = ACTIONS(1),
    [anon_sym_LBRACE] = ACTIONS(1),
    [anon_sym_DOLLAR] = ACTIONS(1),
    [anon_sym_RBRACE] = ACTIONS(1),
    [sym_comment] = ACTIONS(1),
  },
  [1] = {
    [sym_document] = STATE(15),
    [sym_entry] = STATE(4),
    [sym_message] = STATE(11),
    [aux_sym_document_repeat1] = STATE(4),
    [ts_builtin_sym_end] = ACTIONS(3),
    [sym_identifier] = ACTIONS(5),
    [sym_comment] = ACTIONS(7),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 5,
    ACTIONS(9), 1,
      ts_builtin_sym_end,
    ACTIONS(13), 1,
      sym_text,
    ACTIONS(16), 1,
      anon_sym_LBRACE,
    ACTIONS(11), 2,
      sym_identifier,
      sym_comment,
    STATE(2), 2,
      sym_variable,
      aux_sym_message_value_repeat1,
  [18] = 5,
    ACTIONS(19), 1,
      ts_builtin_sym_end,
    ACTIONS(23), 1,
      sym_text,
    ACTIONS(25), 1,
      anon_sym_LBRACE,
    ACTIONS(21), 2,
      sym_identifier,
      sym_comment,
    STATE(2), 2,
      sym_variable,
      aux_sym_message_value_repeat1,
  [36] = 5,
    ACTIONS(5), 1,
      sym_identifier,
    ACTIONS(7), 1,
      sym_comment,
    ACTIONS(27), 1,
      ts_builtin_sym_end,
    STATE(11), 1,
      sym_message,
    STATE(5), 2,
      sym_entry,
      aux_sym_document_repeat1,
  [53] = 5,
    ACTIONS(29), 1,
      ts_builtin_sym_end,
    ACTIONS(31), 1,
      sym_identifier,
    ACTIONS(34), 1,
      sym_comment,
    STATE(11), 1,
      sym_message,
    STATE(5), 2,
      sym_entry,
      aux_sym_document_repeat1,
  [70] = 4,
    ACTIONS(25), 1,
      anon_sym_LBRACE,
    ACTIONS(37), 1,
      sym_text,
    STATE(10), 1,
      sym_message_value,
    STATE(3), 2,
      sym_variable,
      aux_sym_message_value_repeat1,
  [84] = 2,
    ACTIONS(39), 1,
      ts_builtin_sym_end,
    ACTIONS(41), 4,
      sym_identifier,
      sym_text,
      anon_sym_LBRACE,
      sym_comment,
  [94] = 2,
    ACTIONS(43), 1,
      ts_builtin_sym_end,
    ACTIONS(45), 4,
      sym_identifier,
      sym_text,
      anon_sym_LBRACE,
      sym_comment,
  [104] = 2,
    ACTIONS(47), 1,
      ts_builtin_sym_end,
    ACTIONS(49), 4,
      sym_identifier,
      sym_text,
      anon_sym_LBRACE,
      sym_comment,
  [114] = 1,
    ACTIONS(51), 3,
      ts_builtin_sym_end,
      sym_identifier,
      sym_comment,
  [120] = 1,
    ACTIONS(53), 3,
      ts_builtin_sym_end,
      sym_identifier,
      sym_comment,
  [126] = 2,
    ACTIONS(55), 1,
      aux_sym_variable_token1,
    ACTIONS(57), 1,
      anon_sym_DOLLAR,
  [133] = 2,
    ACTIONS(59), 1,
      aux_sym_variable_token1,
    ACTIONS(61), 1,
      anon_sym_RBRACE,
  [140] = 2,
    ACTIONS(63), 1,
      aux_sym_variable_token1,
    ACTIONS(65), 1,
      anon_sym_RBRACE,
  [147] = 1,
    ACTIONS(67), 1,
      ts_builtin_sym_end,
  [151] = 1,
    ACTIONS(69), 1,
      anon_sym_EQ,
  [155] = 1,
    ACTIONS(71), 1,
      anon_sym_DOLLAR,
  [159] = 1,
    ACTIONS(73), 1,
      sym_identifier,
  [163] = 1,
    ACTIONS(75), 1,
      sym_identifier,
  [167] = 1,
    ACTIONS(77), 1,
      anon_sym_RBRACE,
  [171] = 1,
    ACTIONS(79), 1,
      anon_sym_RBRACE,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 18,
  [SMALL_STATE(4)] = 36,
  [SMALL_STATE(5)] = 53,
  [SMALL_STATE(6)] = 70,
  [SMALL_STATE(7)] = 84,
  [SMALL_STATE(8)] = 94,
  [SMALL_STATE(9)] = 104,
  [SMALL_STATE(10)] = 114,
  [SMALL_STATE(11)] = 120,
  [SMALL_STATE(12)] = 126,
  [SMALL_STATE(13)] = 133,
  [SMALL_STATE(14)] = 140,
  [SMALL_STATE(15)] = 147,
  [SMALL_STATE(16)] = 151,
  [SMALL_STATE(17)] = 155,
  [SMALL_STATE(18)] = 159,
  [SMALL_STATE(19)] = 163,
  [SMALL_STATE(20)] = 167,
  [SMALL_STATE(21)] = 171,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_document, 0, 0, 0),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [9] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_message_value_repeat1, 2, 0, 0),
  [11] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_message_value_repeat1, 2, 0, 0),
  [13] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_message_value_repeat1, 2, 0, 0), SHIFT_REPEAT(2),
  [16] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_message_value_repeat1, 2, 0, 0), SHIFT_REPEAT(12),
  [19] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_message_value, 1, 0, 0),
  [21] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_message_value, 1, 0, 0),
  [23] = {.entry = {.count = 1, .reusable = false}}, SHIFT(2),
  [25] = {.entry = {.count = 1, .reusable = false}}, SHIFT(12),
  [27] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_document, 1, 0, 0),
  [29] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2, 0, 0),
  [31] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2, 0, 0), SHIFT_REPEAT(16),
  [34] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2, 0, 0), SHIFT_REPEAT(11),
  [37] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [39] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable, 4, 0, 0),
  [41] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_variable, 4, 0, 0),
  [43] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable, 5, 0, 0),
  [45] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_variable, 5, 0, 0),
  [47] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable, 6, 0, 0),
  [49] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_variable, 6, 0, 0),
  [51] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_message, 3, 0, 0),
  [53] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_entry, 1, 0, 0),
  [55] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [57] = {.entry = {.count = 1, .reusable = false}}, SHIFT(18),
  [59] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [61] = {.entry = {.count = 1, .reusable = false}}, SHIFT(7),
  [63] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [65] = {.entry = {.count = 1, .reusable = false}}, SHIFT(8),
  [67] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [69] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [71] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [73] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [75] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [77] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [79] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
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
