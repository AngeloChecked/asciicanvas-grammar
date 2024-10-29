#include "tree_sitter/parser.h"

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 8
#define LARGE_STATE_COUNT 5
#define SYMBOL_COUNT 13
#define ALIAS_COUNT 0
#define TOKEN_COUNT 9
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 3
#define PRODUCTION_ID_COUNT 1

enum ts_symbol_identifiers {
  sym_white = 1,
  sym_black = 2,
  sym_red = 3,
  sym_blue = 4,
  sym_yellow = 5,
  sym_green = 6,
  anon_sym_DQUOTE = 7,
  aux_sym_char_token1 = 8,
  sym_source_file = 9,
  sym__definition = 10,
  sym_char = 11,
  aux_sym_source_file_repeat1 = 12,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [sym_white] = "white",
  [sym_black] = "black",
  [sym_red] = "red",
  [sym_blue] = "blue",
  [sym_yellow] = "yellow",
  [sym_green] = "green",
  [anon_sym_DQUOTE] = "\"",
  [aux_sym_char_token1] = "char_token1",
  [sym_source_file] = "source_file",
  [sym__definition] = "_definition",
  [sym_char] = "char",
  [aux_sym_source_file_repeat1] = "source_file_repeat1",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [sym_white] = sym_white,
  [sym_black] = sym_black,
  [sym_red] = sym_red,
  [sym_blue] = sym_blue,
  [sym_yellow] = sym_yellow,
  [sym_green] = sym_green,
  [anon_sym_DQUOTE] = anon_sym_DQUOTE,
  [aux_sym_char_token1] = aux_sym_char_token1,
  [sym_source_file] = sym_source_file,
  [sym__definition] = sym__definition,
  [sym_char] = sym_char,
  [aux_sym_source_file_repeat1] = aux_sym_source_file_repeat1,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [sym_white] = {
    .visible = true,
    .named = true,
  },
  [sym_black] = {
    .visible = true,
    .named = true,
  },
  [sym_red] = {
    .visible = true,
    .named = true,
  },
  [sym_blue] = {
    .visible = true,
    .named = true,
  },
  [sym_yellow] = {
    .visible = true,
    .named = true,
  },
  [sym_green] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_DQUOTE] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_char_token1] = {
    .visible = false,
    .named = false,
  },
  [sym_source_file] = {
    .visible = true,
    .named = true,
  },
  [sym__definition] = {
    .visible = false,
    .named = true,
  },
  [sym_char] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_source_file_repeat1] = {
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
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(2);
      if (lookahead == '"') ADVANCE(9);
      if (lookahead == '#') ADVANCE(3);
      if (lookahead == '@') ADVANCE(4);
      if (lookahead == 'B') ADVANCE(6);
      if (lookahead == 'G') ADVANCE(8);
      if (lookahead == 'R') ADVANCE(5);
      if (lookahead == 'Y') ADVANCE(7);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(0);
      END_STATE();
    case 1:
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(10);
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(11);
      END_STATE();
    case 2:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 3:
      ACCEPT_TOKEN(sym_white);
      if (lookahead == '#') ADVANCE(3);
      END_STATE();
    case 4:
      ACCEPT_TOKEN(sym_black);
      if (lookahead == '@') ADVANCE(4);
      END_STATE();
    case 5:
      ACCEPT_TOKEN(sym_red);
      if (lookahead == 'R') ADVANCE(5);
      END_STATE();
    case 6:
      ACCEPT_TOKEN(sym_blue);
      if (lookahead == 'B') ADVANCE(6);
      END_STATE();
    case 7:
      ACCEPT_TOKEN(sym_yellow);
      if (lookahead == 'Y') ADVANCE(7);
      END_STATE();
    case 8:
      ACCEPT_TOKEN(sym_green);
      if (lookahead == 'G') ADVANCE(8);
      END_STATE();
    case 9:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 10:
      ACCEPT_TOKEN(aux_sym_char_token1);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(10);
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(11);
      END_STATE();
    case 11:
      ACCEPT_TOKEN(aux_sym_char_token1);
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(11);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 0},
  [2] = {.lex_state = 0},
  [3] = {.lex_state = 0},
  [4] = {.lex_state = 0},
  [5] = {.lex_state = 1},
  [6] = {.lex_state = 0},
  [7] = {.lex_state = 0},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [sym_white] = ACTIONS(1),
    [sym_black] = ACTIONS(1),
    [sym_red] = ACTIONS(1),
    [sym_blue] = ACTIONS(1),
    [sym_yellow] = ACTIONS(1),
    [sym_green] = ACTIONS(1),
    [anon_sym_DQUOTE] = ACTIONS(1),
  },
  [1] = {
    [sym_source_file] = STATE(6),
    [sym__definition] = STATE(2),
    [sym_char] = STATE(2),
    [aux_sym_source_file_repeat1] = STATE(2),
    [ts_builtin_sym_end] = ACTIONS(3),
    [sym_white] = ACTIONS(5),
    [sym_black] = ACTIONS(5),
    [sym_red] = ACTIONS(5),
    [sym_blue] = ACTIONS(5),
    [sym_yellow] = ACTIONS(5),
    [sym_green] = ACTIONS(5),
    [anon_sym_DQUOTE] = ACTIONS(7),
  },
  [2] = {
    [sym__definition] = STATE(3),
    [sym_char] = STATE(3),
    [aux_sym_source_file_repeat1] = STATE(3),
    [ts_builtin_sym_end] = ACTIONS(9),
    [sym_white] = ACTIONS(11),
    [sym_black] = ACTIONS(11),
    [sym_red] = ACTIONS(11),
    [sym_blue] = ACTIONS(11),
    [sym_yellow] = ACTIONS(11),
    [sym_green] = ACTIONS(11),
    [anon_sym_DQUOTE] = ACTIONS(7),
  },
  [3] = {
    [sym__definition] = STATE(3),
    [sym_char] = STATE(3),
    [aux_sym_source_file_repeat1] = STATE(3),
    [ts_builtin_sym_end] = ACTIONS(13),
    [sym_white] = ACTIONS(15),
    [sym_black] = ACTIONS(15),
    [sym_red] = ACTIONS(15),
    [sym_blue] = ACTIONS(15),
    [sym_yellow] = ACTIONS(15),
    [sym_green] = ACTIONS(15),
    [anon_sym_DQUOTE] = ACTIONS(18),
  },
  [4] = {
    [ts_builtin_sym_end] = ACTIONS(21),
    [sym_white] = ACTIONS(21),
    [sym_black] = ACTIONS(21),
    [sym_red] = ACTIONS(21),
    [sym_blue] = ACTIONS(21),
    [sym_yellow] = ACTIONS(21),
    [sym_green] = ACTIONS(21),
    [anon_sym_DQUOTE] = ACTIONS(21),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 1,
    ACTIONS(23), 1,
      aux_sym_char_token1,
  [4] = 1,
    ACTIONS(25), 1,
      ts_builtin_sym_end,
  [8] = 1,
    ACTIONS(27), 1,
      anon_sym_DQUOTE,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(5)] = 0,
  [SMALL_STATE(6)] = 4,
  [SMALL_STATE(7)] = 8,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0, 0, 0),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [9] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1, 0, 0),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [13] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0),
  [15] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(3),
  [18] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(5),
  [21] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_char, 3, 0, 0),
  [23] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [25] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [27] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
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

TS_PUBLIC const TSLanguage *tree_sitter_asciicanvas(void) {
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
