#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 11
#define STATE_COUNT 43
#define LARGE_STATE_COUNT 5
#define SYMBOL_COUNT 37
#define ALIAS_COUNT 1
#define TOKEN_COUNT 19
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 4

enum {
  aux_sym__keyword_if_token1 = 1,
  aux_sym__keyword_else_if_token1 = 2,
  sym__keyword_else = 3,
  aux_sym__command_multi_arg_token1 = 4,
  aux_sym__command_single_arg_token1 = 5,
  aux_sym__command_make_token1 = 6,
  aux_sym__command_condition_token1 = 7,
  aux_sym__command_arg_list_token1 = 8,
  aux_sym__command_arg_list_token2 = 9,
  aux_sym__command_arg_list_token3 = 10,
  aux_sym___command_spread_on_token1 = 11,
  aux_sym___command_spread_on_token2 = 12,
  aux_sym___command_add_to_token1 = 13,
  aux_sym___command_add_to_token2 = 14,
  aux_sym___command_make_as_a_token1 = 15,
  sym__token_multi_word = 16,
  sym__token_single_word = 17,
  sym__token_special_char = 18,
  sym_program = 19,
  sym_type = 20,
  sym_keyword = 21,
  sym__keyword_if = 22,
  sym__keyword_else_if = 23,
  sym_command = 24,
  sym__command_multi_arg = 25,
  sym__command_single_arg = 26,
  sym__command_make = 27,
  sym__command_split = 28,
  sym__command_condition = 29,
  sym__command_arg_list = 30,
  sym___command_spread_on = 31,
  sym___command_add_to = 32,
  sym___command_make_as_a = 33,
  sym_token = 34,
  aux_sym_program_repeat1 = 35,
  aux_sym__command_arg_list_repeat1 = 36,
  anon_alias_sym_type = 37,
};

static const char *ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [aux_sym__keyword_if_token1] = "_keyword_if_token1",
  [aux_sym__keyword_else_if_token1] = "_keyword_else_if_token1",
  [sym__keyword_else] = "_keyword_else",
  [aux_sym__command_multi_arg_token1] = "_command_multi_arg_token1",
  [aux_sym__command_single_arg_token1] = "_command_single_arg_token1",
  [aux_sym__command_make_token1] = "_command_make_token1",
  [aux_sym__command_condition_token1] = "_command_condition_token1",
  [aux_sym__command_arg_list_token1] = "_command_arg_list_token1",
  [aux_sym__command_arg_list_token2] = "_command_arg_list_token2",
  [aux_sym__command_arg_list_token3] = "_command_arg_list_token3",
  [aux_sym___command_spread_on_token1] = "__command_spread_on_token1",
  [aux_sym___command_spread_on_token2] = "__command_spread_on_token2",
  [aux_sym___command_add_to_token1] = "__command_add_to_token1",
  [aux_sym___command_add_to_token2] = "__command_add_to_token2",
  [aux_sym___command_make_as_a_token1] = "__command_make_as_a_token1",
  [sym__token_multi_word] = "_token_multi_word",
  [sym__token_single_word] = "_token_single_word",
  [sym__token_special_char] = "_token_special_char",
  [sym_program] = "program",
  [sym_type] = "type",
  [sym_keyword] = "keyword",
  [sym__keyword_if] = "_keyword_if",
  [sym__keyword_else_if] = "_keyword_else_if",
  [sym_command] = "command",
  [sym__command_multi_arg] = "_command_multi_arg",
  [sym__command_single_arg] = "_command_single_arg",
  [sym__command_make] = "_command_make",
  [sym__command_split] = "_command_split",
  [sym__command_condition] = "_command_condition",
  [sym__command_arg_list] = "_command_arg_list",
  [sym___command_spread_on] = "__command_spread_on",
  [sym___command_add_to] = "__command_add_to",
  [sym___command_make_as_a] = "__command_make_as_a",
  [sym_token] = "token",
  [aux_sym_program_repeat1] = "program_repeat1",
  [aux_sym__command_arg_list_repeat1] = "_command_arg_list_repeat1",
  [anon_alias_sym_type] = "type",
};

static TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [aux_sym__keyword_if_token1] = aux_sym__keyword_if_token1,
  [aux_sym__keyword_else_if_token1] = aux_sym__keyword_else_if_token1,
  [sym__keyword_else] = sym__keyword_else,
  [aux_sym__command_multi_arg_token1] = aux_sym__command_multi_arg_token1,
  [aux_sym__command_single_arg_token1] = aux_sym__command_single_arg_token1,
  [aux_sym__command_make_token1] = aux_sym__command_make_token1,
  [aux_sym__command_condition_token1] = aux_sym__command_condition_token1,
  [aux_sym__command_arg_list_token1] = aux_sym__command_arg_list_token1,
  [aux_sym__command_arg_list_token2] = aux_sym__command_arg_list_token2,
  [aux_sym__command_arg_list_token3] = aux_sym__command_arg_list_token3,
  [aux_sym___command_spread_on_token1] = aux_sym___command_spread_on_token1,
  [aux_sym___command_spread_on_token2] = aux_sym___command_spread_on_token2,
  [aux_sym___command_add_to_token1] = aux_sym___command_add_to_token1,
  [aux_sym___command_add_to_token2] = aux_sym___command_add_to_token2,
  [aux_sym___command_make_as_a_token1] = aux_sym___command_make_as_a_token1,
  [sym__token_multi_word] = sym__token_multi_word,
  [sym__token_single_word] = sym__token_single_word,
  [sym__token_special_char] = sym__token_special_char,
  [sym_program] = sym_program,
  [sym_type] = sym_type,
  [sym_keyword] = sym_keyword,
  [sym__keyword_if] = sym__keyword_if,
  [sym__keyword_else_if] = sym__keyword_else_if,
  [sym_command] = sym_command,
  [sym__command_multi_arg] = sym__command_multi_arg,
  [sym__command_single_arg] = sym__command_single_arg,
  [sym__command_make] = sym__command_make,
  [sym__command_split] = sym__command_split,
  [sym__command_condition] = sym__command_condition,
  [sym__command_arg_list] = sym__command_arg_list,
  [sym___command_spread_on] = sym___command_spread_on,
  [sym___command_add_to] = sym___command_add_to,
  [sym___command_make_as_a] = sym___command_make_as_a,
  [sym_token] = sym_token,
  [aux_sym_program_repeat1] = aux_sym_program_repeat1,
  [aux_sym__command_arg_list_repeat1] = aux_sym__command_arg_list_repeat1,
  [anon_alias_sym_type] = anon_alias_sym_type,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [aux_sym__keyword_if_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__keyword_else_if_token1] = {
    .visible = false,
    .named = false,
  },
  [sym__keyword_else] = {
    .visible = false,
    .named = true,
  },
  [aux_sym__command_multi_arg_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__command_single_arg_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__command_make_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__command_condition_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__command_arg_list_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__command_arg_list_token2] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__command_arg_list_token3] = {
    .visible = false,
    .named = false,
  },
  [aux_sym___command_spread_on_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym___command_spread_on_token2] = {
    .visible = false,
    .named = false,
  },
  [aux_sym___command_add_to_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym___command_add_to_token2] = {
    .visible = false,
    .named = false,
  },
  [aux_sym___command_make_as_a_token1] = {
    .visible = false,
    .named = false,
  },
  [sym__token_multi_word] = {
    .visible = false,
    .named = true,
  },
  [sym__token_single_word] = {
    .visible = false,
    .named = true,
  },
  [sym__token_special_char] = {
    .visible = false,
    .named = true,
  },
  [sym_program] = {
    .visible = true,
    .named = true,
  },
  [sym_type] = {
    .visible = true,
    .named = true,
  },
  [sym_keyword] = {
    .visible = true,
    .named = true,
  },
  [sym__keyword_if] = {
    .visible = false,
    .named = true,
  },
  [sym__keyword_else_if] = {
    .visible = false,
    .named = true,
  },
  [sym_command] = {
    .visible = true,
    .named = true,
  },
  [sym__command_multi_arg] = {
    .visible = false,
    .named = true,
  },
  [sym__command_single_arg] = {
    .visible = false,
    .named = true,
  },
  [sym__command_make] = {
    .visible = false,
    .named = true,
  },
  [sym__command_split] = {
    .visible = false,
    .named = true,
  },
  [sym__command_condition] = {
    .visible = false,
    .named = true,
  },
  [sym__command_arg_list] = {
    .visible = false,
    .named = true,
  },
  [sym___command_spread_on] = {
    .visible = false,
    .named = true,
  },
  [sym___command_add_to] = {
    .visible = false,
    .named = true,
  },
  [sym___command_make_as_a] = {
    .visible = false,
    .named = true,
  },
  [sym_token] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_program_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__command_arg_list_repeat1] = {
    .visible = false,
    .named = false,
  },
  [anon_alias_sym_type] = {
    .visible = true,
    .named = false,
  },
};

static TSSymbol ts_alias_sequences[2][MAX_ALIAS_SEQUENCE_LENGTH] = {
  [0] = {0},
  [1] = {
    [0] = anon_alias_sym_type,
  },
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(54);
      if (lookahead == '(') ADVANCE(74);
      if (lookahead == ')') ADVANCE(76);
      if (lookahead == ',') ADVANCE(75);
      if (lookahead == 'a') ADVANCE(14);
      if (lookahead == 'e') ADVANCE(31);
      if (lookahead == 'f') ADVANCE(43);
      if (lookahead == 'g') ADVANCE(17);
      if (lookahead == 'i') ADVANCE(23);
      if (lookahead == 'm') ADVANCE(4);
      if (lookahead == 'o') ADVANCE(37);
      if (lookahead == 's') ADVANCE(42);
      if (lookahead == 't') ADVANCE(39);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      END_STATE();
    case 1:
      if (lookahead == '(') ADVANCE(74);
      if (lookahead == ')') ADVANCE(76);
      if (lookahead == ',') ADVANCE(75);
      if (lookahead == 'o') ADVANCE(37);
      if (lookahead == 't') ADVANCE(39);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(1)
      END_STATE();
    case 2:
      if (lookahead == '-') ADVANCE(12);
      END_STATE();
    case 3:
      if (lookahead == '-') ADVANCE(5);
      END_STATE();
    case 4:
      if (lookahead == 'a') ADVANCE(29);
      END_STATE();
    case 5:
      if (lookahead == 'a') ADVANCE(85);
      END_STATE();
    case 6:
      if (lookahead == 'a') ADVANCE(86);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(99);
      END_STATE();
    case 7:
      if (lookahead == 'a') ADVANCE(16);
      END_STATE();
    case 8:
      if (lookahead == 'a') ADVANCE(30);
      END_STATE();
    case 9:
      if (lookahead == 'b') ADVANCE(28);
      END_STATE();
    case 10:
      if (lookahead == 'c') ADVANCE(98);
      if (lookahead == 's') ADVANCE(95);
      if (lookahead == 't') ADVANCE(87);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(99);
      END_STATE();
    case 11:
      if (lookahead == 'c') ADVANCE(111);
      if (lookahead == 's') ADVANCE(108);
      if (lookahead == 't') ADVANCE(100);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(112);
      END_STATE();
    case 12:
      if (lookahead == 'c') ADVANCE(41);
      if (lookahead == 's') ADVANCE(34);
      if (lookahead == 't') ADVANCE(8);
      END_STATE();
    case 13:
      if (lookahead == 'c') ADVANCE(18);
      END_STATE();
    case 14:
      if (lookahead == 'd') ADVANCE(15);
      if (lookahead == 's') ADVANCE(3);
      END_STATE();
    case 15:
      if (lookahead == 'd') ADVANCE(81);
      END_STATE();
    case 16:
      if (lookahead == 'd') ADVANCE(77);
      END_STATE();
    case 17:
      if (lookahead == 'e') ADVANCE(46);
      if (lookahead == 'r') ADVANCE(26);
      END_STATE();
    case 18:
      if (lookahead == 'e') ADVANCE(65);
      END_STATE();
    case 19:
      if (lookahead == 'e') ADVANCE(59);
      END_STATE();
    case 20:
      if (lookahead == 'e') ADVANCE(70);
      END_STATE();
    case 21:
      if (lookahead == 'e') ADVANCE(62);
      END_STATE();
    case 22:
      if (lookahead == 'e') ADVANCE(7);
      END_STATE();
    case 23:
      if (lookahead == 'f') ADVANCE(55);
      END_STATE();
    case 24:
      if (lookahead == 'f') ADVANCE(58);
      END_STATE();
    case 25:
      if (lookahead == 'i') ADVANCE(13);
      END_STATE();
    case 26:
      if (lookahead == 'i') ADVANCE(33);
      END_STATE();
    case 27:
      if (lookahead == 'i') ADVANCE(24);
      END_STATE();
    case 28:
      if (lookahead == 'i') ADVANCE(38);
      END_STATE();
    case 29:
      if (lookahead == 'k') ADVANCE(20);
      END_STATE();
    case 30:
      if (lookahead == 'k') ADVANCE(18);
      END_STATE();
    case 31:
      if (lookahead == 'l') ADVANCE(45);
      END_STATE();
    case 32:
      if (lookahead == 'l') ADVANCE(65);
      END_STATE();
    case 33:
      if (lookahead == 'l') ADVANCE(32);
      END_STATE();
    case 34:
      if (lookahead == 'l') ADVANCE(25);
      END_STATE();
    case 35:
      if (lookahead == 'm') ADVANCE(9);
      END_STATE();
    case 36:
      if (lookahead == 'm') ADVANCE(2);
      END_STATE();
    case 37:
      if (lookahead == 'n') ADVANCE(80);
      END_STATE();
    case 38:
      if (lookahead == 'n') ADVANCE(21);
      END_STATE();
    case 39:
      if (lookahead == 'o') ADVANCE(84);
      END_STATE();
    case 40:
      if (lookahead == 'o') ADVANCE(36);
      END_STATE();
    case 41:
      if (lookahead == 'o') ADVANCE(35);
      END_STATE();
    case 42:
      if (lookahead == 'p') ADVANCE(44);
      END_STATE();
    case 43:
      if (lookahead == 'r') ADVANCE(40);
      END_STATE();
    case 44:
      if (lookahead == 'r') ADVANCE(22);
      END_STATE();
    case 45:
      if (lookahead == 's') ADVANCE(19);
      END_STATE();
    case 46:
      if (lookahead == 't') ADVANCE(65);
      END_STATE();
    case 47:
      if (lookahead == '(' ||
          lookahead == ')' ||
          lookahead == ',') ADVANCE(163);
      if (lookahead == 'a') ADVANCE(118);
      if (lookahead == 'f') ADVANCE(132);
      if (lookahead == 'g') ADVANCE(119);
      if (lookahead == 'm') ADVANCE(113);
      if (lookahead == 's') ADVANCE(131);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(47)
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(136);
      END_STATE();
    case 48:
      if (lookahead == '(' ||
          lookahead == ')' ||
          lookahead == ',') ADVANCE(163);
      if (lookahead == 'a') ADVANCE(117);
      if (lookahead == 'f') ADVANCE(132);
      if (lookahead == 'g') ADVANCE(119);
      if (lookahead == 'm') ADVANCE(113);
      if (lookahead == 's') ADVANCE(131);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(48)
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(136);
      END_STATE();
    case 49:
      if (lookahead == '(' ||
          lookahead == ')' ||
          lookahead == ',') ADVANCE(163);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(49)
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(136);
      END_STATE();
    case 50:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(99);
      END_STATE();
    case 51:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(112);
      END_STATE();
    case 52:
      if (eof) ADVANCE(54);
      if (lookahead == '(' ||
          lookahead == ')' ||
          lookahead == ',') ADVANCE(163);
      if (lookahead == 'a') ADVANCE(118);
      if (lookahead == 'e') ADVANCE(126);
      if (lookahead == 'f') ADVANCE(132);
      if (lookahead == 'g') ADVANCE(119);
      if (lookahead == 'i') ADVANCE(123);
      if (lookahead == 'm') ADVANCE(113);
      if (lookahead == 's') ADVANCE(131);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(52)
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(136);
      END_STATE();
    case 53:
      if (eof) ADVANCE(54);
      if (lookahead == '(' ||
          lookahead == ')' ||
          lookahead == ',') ADVANCE(163);
      if (lookahead == 'a') ADVANCE(143);
      if (lookahead == 'e') ADVANCE(151);
      if (lookahead == 'f') ADVANCE(157);
      if (lookahead == 'g') ADVANCE(144);
      if (lookahead == 'i') ADVANCE(148);
      if (lookahead == 'm') ADVANCE(139);
      if (lookahead == 's') ADVANCE(156);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(53)
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(161);
      END_STATE();
    case 54:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 55:
      ACCEPT_TOKEN(aux_sym__keyword_if_token1);
      END_STATE();
    case 56:
      ACCEPT_TOKEN(aux_sym__keyword_if_token1);
      if (lookahead == '-') ADVANCE(50);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(136);
      END_STATE();
    case 57:
      ACCEPT_TOKEN(aux_sym__keyword_if_token1);
      if (lookahead == '-') ADVANCE(51);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(161);
      END_STATE();
    case 58:
      ACCEPT_TOKEN(aux_sym__keyword_else_if_token1);
      END_STATE();
    case 59:
      ACCEPT_TOKEN(sym__keyword_else);
      if (lookahead == ' ') ADVANCE(27);
      END_STATE();
    case 60:
      ACCEPT_TOKEN(sym__keyword_else);
      if (lookahead == ' ') ADVANCE(27);
      if (lookahead == '-') ADVANCE(50);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(136);
      END_STATE();
    case 61:
      ACCEPT_TOKEN(sym__keyword_else);
      if (lookahead == ' ') ADVANCE(27);
      if (lookahead == '-') ADVANCE(51);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(161);
      END_STATE();
    case 62:
      ACCEPT_TOKEN(aux_sym__command_multi_arg_token1);
      END_STATE();
    case 63:
      ACCEPT_TOKEN(aux_sym__command_multi_arg_token1);
      if (lookahead == '-') ADVANCE(50);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(99);
      END_STATE();
    case 64:
      ACCEPT_TOKEN(aux_sym__command_multi_arg_token1);
      if (lookahead == '-') ADVANCE(51);
      if (lookahead == '?') ADVANCE(73);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(112);
      END_STATE();
    case 65:
      ACCEPT_TOKEN(aux_sym__command_single_arg_token1);
      END_STATE();
    case 66:
      ACCEPT_TOKEN(aux_sym__command_single_arg_token1);
      if (lookahead == '-') ADVANCE(50);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(136);
      END_STATE();
    case 67:
      ACCEPT_TOKEN(aux_sym__command_single_arg_token1);
      if (lookahead == '-') ADVANCE(50);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(99);
      END_STATE();
    case 68:
      ACCEPT_TOKEN(aux_sym__command_single_arg_token1);
      if (lookahead == '-') ADVANCE(51);
      if (lookahead == '?') ADVANCE(73);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(112);
      END_STATE();
    case 69:
      ACCEPT_TOKEN(aux_sym__command_single_arg_token1);
      if (lookahead == '-') ADVANCE(51);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(161);
      END_STATE();
    case 70:
      ACCEPT_TOKEN(aux_sym__command_make_token1);
      END_STATE();
    case 71:
      ACCEPT_TOKEN(aux_sym__command_make_token1);
      if (lookahead == '-') ADVANCE(50);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(136);
      END_STATE();
    case 72:
      ACCEPT_TOKEN(aux_sym__command_make_token1);
      if (lookahead == '-') ADVANCE(51);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(161);
      END_STATE();
    case 73:
      ACCEPT_TOKEN(aux_sym__command_condition_token1);
      END_STATE();
    case 74:
      ACCEPT_TOKEN(aux_sym__command_arg_list_token1);
      END_STATE();
    case 75:
      ACCEPT_TOKEN(aux_sym__command_arg_list_token2);
      END_STATE();
    case 76:
      ACCEPT_TOKEN(aux_sym__command_arg_list_token3);
      END_STATE();
    case 77:
      ACCEPT_TOKEN(aux_sym___command_spread_on_token1);
      END_STATE();
    case 78:
      ACCEPT_TOKEN(aux_sym___command_spread_on_token1);
      if (lookahead == '-') ADVANCE(50);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(136);
      END_STATE();
    case 79:
      ACCEPT_TOKEN(aux_sym___command_spread_on_token1);
      if (lookahead == '-') ADVANCE(51);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(161);
      END_STATE();
    case 80:
      ACCEPT_TOKEN(aux_sym___command_spread_on_token2);
      END_STATE();
    case 81:
      ACCEPT_TOKEN(aux_sym___command_add_to_token1);
      END_STATE();
    case 82:
      ACCEPT_TOKEN(aux_sym___command_add_to_token1);
      if (lookahead == '-') ADVANCE(50);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(136);
      END_STATE();
    case 83:
      ACCEPT_TOKEN(aux_sym___command_add_to_token1);
      if (lookahead == '-') ADVANCE(51);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(161);
      END_STATE();
    case 84:
      ACCEPT_TOKEN(aux_sym___command_add_to_token2);
      END_STATE();
    case 85:
      ACCEPT_TOKEN(aux_sym___command_make_as_a_token1);
      END_STATE();
    case 86:
      ACCEPT_TOKEN(aux_sym___command_make_as_a_token1);
      if (lookahead == '-') ADVANCE(50);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(99);
      END_STATE();
    case 87:
      ACCEPT_TOKEN(sym__token_multi_word);
      if (lookahead == '-') ADVANCE(50);
      if (lookahead == 'a') ADVANCE(94);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(99);
      END_STATE();
    case 88:
      ACCEPT_TOKEN(sym__token_multi_word);
      if (lookahead == '-') ADVANCE(50);
      if (lookahead == 'b') ADVANCE(93);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(99);
      END_STATE();
    case 89:
      ACCEPT_TOKEN(sym__token_multi_word);
      if (lookahead == '-') ADVANCE(50);
      if (lookahead == 'c') ADVANCE(91);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(99);
      END_STATE();
    case 90:
      ACCEPT_TOKEN(sym__token_multi_word);
      if (lookahead == '-') ADVANCE(50);
      if (lookahead == 'e') ADVANCE(63);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(99);
      END_STATE();
    case 91:
      ACCEPT_TOKEN(sym__token_multi_word);
      if (lookahead == '-') ADVANCE(50);
      if (lookahead == 'e') ADVANCE(67);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(99);
      END_STATE();
    case 92:
      ACCEPT_TOKEN(sym__token_multi_word);
      if (lookahead == '-') ADVANCE(50);
      if (lookahead == 'i') ADVANCE(89);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(99);
      END_STATE();
    case 93:
      ACCEPT_TOKEN(sym__token_multi_word);
      if (lookahead == '-') ADVANCE(50);
      if (lookahead == 'i') ADVANCE(97);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(99);
      END_STATE();
    case 94:
      ACCEPT_TOKEN(sym__token_multi_word);
      if (lookahead == '-') ADVANCE(50);
      if (lookahead == 'k') ADVANCE(91);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(99);
      END_STATE();
    case 95:
      ACCEPT_TOKEN(sym__token_multi_word);
      if (lookahead == '-') ADVANCE(50);
      if (lookahead == 'l') ADVANCE(92);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(99);
      END_STATE();
    case 96:
      ACCEPT_TOKEN(sym__token_multi_word);
      if (lookahead == '-') ADVANCE(50);
      if (lookahead == 'm') ADVANCE(88);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(99);
      END_STATE();
    case 97:
      ACCEPT_TOKEN(sym__token_multi_word);
      if (lookahead == '-') ADVANCE(50);
      if (lookahead == 'n') ADVANCE(90);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(99);
      END_STATE();
    case 98:
      ACCEPT_TOKEN(sym__token_multi_word);
      if (lookahead == '-') ADVANCE(50);
      if (lookahead == 'o') ADVANCE(96);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(99);
      END_STATE();
    case 99:
      ACCEPT_TOKEN(sym__token_multi_word);
      if (lookahead == '-') ADVANCE(50);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(99);
      END_STATE();
    case 100:
      ACCEPT_TOKEN(sym__token_multi_word);
      if (lookahead == '-') ADVANCE(51);
      if (lookahead == '?') ADVANCE(73);
      if (lookahead == 'a') ADVANCE(107);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(112);
      END_STATE();
    case 101:
      ACCEPT_TOKEN(sym__token_multi_word);
      if (lookahead == '-') ADVANCE(51);
      if (lookahead == '?') ADVANCE(73);
      if (lookahead == 'b') ADVANCE(106);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(112);
      END_STATE();
    case 102:
      ACCEPT_TOKEN(sym__token_multi_word);
      if (lookahead == '-') ADVANCE(51);
      if (lookahead == '?') ADVANCE(73);
      if (lookahead == 'c') ADVANCE(103);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(112);
      END_STATE();
    case 103:
      ACCEPT_TOKEN(sym__token_multi_word);
      if (lookahead == '-') ADVANCE(51);
      if (lookahead == '?') ADVANCE(73);
      if (lookahead == 'e') ADVANCE(68);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(112);
      END_STATE();
    case 104:
      ACCEPT_TOKEN(sym__token_multi_word);
      if (lookahead == '-') ADVANCE(51);
      if (lookahead == '?') ADVANCE(73);
      if (lookahead == 'e') ADVANCE(64);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(112);
      END_STATE();
    case 105:
      ACCEPT_TOKEN(sym__token_multi_word);
      if (lookahead == '-') ADVANCE(51);
      if (lookahead == '?') ADVANCE(73);
      if (lookahead == 'i') ADVANCE(102);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(112);
      END_STATE();
    case 106:
      ACCEPT_TOKEN(sym__token_multi_word);
      if (lookahead == '-') ADVANCE(51);
      if (lookahead == '?') ADVANCE(73);
      if (lookahead == 'i') ADVANCE(110);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(112);
      END_STATE();
    case 107:
      ACCEPT_TOKEN(sym__token_multi_word);
      if (lookahead == '-') ADVANCE(51);
      if (lookahead == '?') ADVANCE(73);
      if (lookahead == 'k') ADVANCE(103);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(112);
      END_STATE();
    case 108:
      ACCEPT_TOKEN(sym__token_multi_word);
      if (lookahead == '-') ADVANCE(51);
      if (lookahead == '?') ADVANCE(73);
      if (lookahead == 'l') ADVANCE(105);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(112);
      END_STATE();
    case 109:
      ACCEPT_TOKEN(sym__token_multi_word);
      if (lookahead == '-') ADVANCE(51);
      if (lookahead == '?') ADVANCE(73);
      if (lookahead == 'm') ADVANCE(101);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(112);
      END_STATE();
    case 110:
      ACCEPT_TOKEN(sym__token_multi_word);
      if (lookahead == '-') ADVANCE(51);
      if (lookahead == '?') ADVANCE(73);
      if (lookahead == 'n') ADVANCE(104);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(112);
      END_STATE();
    case 111:
      ACCEPT_TOKEN(sym__token_multi_word);
      if (lookahead == '-') ADVANCE(51);
      if (lookahead == '?') ADVANCE(73);
      if (lookahead == 'o') ADVANCE(109);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(112);
      END_STATE();
    case 112:
      ACCEPT_TOKEN(sym__token_multi_word);
      if (lookahead == '-') ADVANCE(51);
      if (lookahead == '?') ADVANCE(73);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(112);
      END_STATE();
    case 113:
      ACCEPT_TOKEN(sym__token_single_word);
      if (lookahead == '-') ADVANCE(50);
      if (lookahead == 'a') ADVANCE(125);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(136);
      END_STATE();
    case 114:
      ACCEPT_TOKEN(sym__token_single_word);
      if (lookahead == '-') ADVANCE(50);
      if (lookahead == 'a') ADVANCE(116);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(136);
      END_STATE();
    case 115:
      ACCEPT_TOKEN(sym__token_single_word);
      if (lookahead == '-') ADVANCE(50);
      if (lookahead == 'd') ADVANCE(82);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(136);
      END_STATE();
    case 116:
      ACCEPT_TOKEN(sym__token_single_word);
      if (lookahead == '-') ADVANCE(50);
      if (lookahead == 'd') ADVANCE(78);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(136);
      END_STATE();
    case 117:
      ACCEPT_TOKEN(sym__token_single_word);
      if (lookahead == '-') ADVANCE(50);
      if (lookahead == 'd') ADVANCE(115);
      if (lookahead == 's') ADVANCE(138);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(136);
      END_STATE();
    case 118:
      ACCEPT_TOKEN(sym__token_single_word);
      if (lookahead == '-') ADVANCE(50);
      if (lookahead == 'd') ADVANCE(115);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(136);
      END_STATE();
    case 119:
      ACCEPT_TOKEN(sym__token_single_word);
      if (lookahead == '-') ADVANCE(50);
      if (lookahead == 'e') ADVANCE(135);
      if (lookahead == 'r') ADVANCE(124);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(136);
      END_STATE();
    case 120:
      ACCEPT_TOKEN(sym__token_single_word);
      if (lookahead == '-') ADVANCE(50);
      if (lookahead == 'e') ADVANCE(60);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(136);
      END_STATE();
    case 121:
      ACCEPT_TOKEN(sym__token_single_word);
      if (lookahead == '-') ADVANCE(50);
      if (lookahead == 'e') ADVANCE(71);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(136);
      END_STATE();
    case 122:
      ACCEPT_TOKEN(sym__token_single_word);
      if (lookahead == '-') ADVANCE(50);
      if (lookahead == 'e') ADVANCE(114);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(136);
      END_STATE();
    case 123:
      ACCEPT_TOKEN(sym__token_single_word);
      if (lookahead == '-') ADVANCE(50);
      if (lookahead == 'f') ADVANCE(56);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(136);
      END_STATE();
    case 124:
      ACCEPT_TOKEN(sym__token_single_word);
      if (lookahead == '-') ADVANCE(50);
      if (lookahead == 'i') ADVANCE(128);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(136);
      END_STATE();
    case 125:
      ACCEPT_TOKEN(sym__token_single_word);
      if (lookahead == '-') ADVANCE(50);
      if (lookahead == 'k') ADVANCE(121);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(136);
      END_STATE();
    case 126:
      ACCEPT_TOKEN(sym__token_single_word);
      if (lookahead == '-') ADVANCE(50);
      if (lookahead == 'l') ADVANCE(134);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(136);
      END_STATE();
    case 127:
      ACCEPT_TOKEN(sym__token_single_word);
      if (lookahead == '-') ADVANCE(50);
      if (lookahead == 'l') ADVANCE(66);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(136);
      END_STATE();
    case 128:
      ACCEPT_TOKEN(sym__token_single_word);
      if (lookahead == '-') ADVANCE(50);
      if (lookahead == 'l') ADVANCE(127);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(136);
      END_STATE();
    case 129:
      ACCEPT_TOKEN(sym__token_single_word);
      if (lookahead == '-') ADVANCE(50);
      if (lookahead == 'm') ADVANCE(137);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(136);
      END_STATE();
    case 130:
      ACCEPT_TOKEN(sym__token_single_word);
      if (lookahead == '-') ADVANCE(50);
      if (lookahead == 'o') ADVANCE(129);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(136);
      END_STATE();
    case 131:
      ACCEPT_TOKEN(sym__token_single_word);
      if (lookahead == '-') ADVANCE(50);
      if (lookahead == 'p') ADVANCE(133);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(136);
      END_STATE();
    case 132:
      ACCEPT_TOKEN(sym__token_single_word);
      if (lookahead == '-') ADVANCE(50);
      if (lookahead == 'r') ADVANCE(130);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(136);
      END_STATE();
    case 133:
      ACCEPT_TOKEN(sym__token_single_word);
      if (lookahead == '-') ADVANCE(50);
      if (lookahead == 'r') ADVANCE(122);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(136);
      END_STATE();
    case 134:
      ACCEPT_TOKEN(sym__token_single_word);
      if (lookahead == '-') ADVANCE(50);
      if (lookahead == 's') ADVANCE(120);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(136);
      END_STATE();
    case 135:
      ACCEPT_TOKEN(sym__token_single_word);
      if (lookahead == '-') ADVANCE(50);
      if (lookahead == 't') ADVANCE(66);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(136);
      END_STATE();
    case 136:
      ACCEPT_TOKEN(sym__token_single_word);
      if (lookahead == '-') ADVANCE(50);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(136);
      END_STATE();
    case 137:
      ACCEPT_TOKEN(sym__token_single_word);
      if (lookahead == '-') ADVANCE(10);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(136);
      END_STATE();
    case 138:
      ACCEPT_TOKEN(sym__token_single_word);
      if (lookahead == '-') ADVANCE(6);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(136);
      END_STATE();
    case 139:
      ACCEPT_TOKEN(sym__token_single_word);
      if (lookahead == '-') ADVANCE(51);
      if (lookahead == 'a') ADVANCE(150);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(161);
      END_STATE();
    case 140:
      ACCEPT_TOKEN(sym__token_single_word);
      if (lookahead == '-') ADVANCE(51);
      if (lookahead == 'a') ADVANCE(142);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(161);
      END_STATE();
    case 141:
      ACCEPT_TOKEN(sym__token_single_word);
      if (lookahead == '-') ADVANCE(51);
      if (lookahead == 'd') ADVANCE(83);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(161);
      END_STATE();
    case 142:
      ACCEPT_TOKEN(sym__token_single_word);
      if (lookahead == '-') ADVANCE(51);
      if (lookahead == 'd') ADVANCE(79);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(161);
      END_STATE();
    case 143:
      ACCEPT_TOKEN(sym__token_single_word);
      if (lookahead == '-') ADVANCE(51);
      if (lookahead == 'd') ADVANCE(141);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(161);
      END_STATE();
    case 144:
      ACCEPT_TOKEN(sym__token_single_word);
      if (lookahead == '-') ADVANCE(51);
      if (lookahead == 'e') ADVANCE(160);
      if (lookahead == 'r') ADVANCE(149);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(161);
      END_STATE();
    case 145:
      ACCEPT_TOKEN(sym__token_single_word);
      if (lookahead == '-') ADVANCE(51);
      if (lookahead == 'e') ADVANCE(61);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(161);
      END_STATE();
    case 146:
      ACCEPT_TOKEN(sym__token_single_word);
      if (lookahead == '-') ADVANCE(51);
      if (lookahead == 'e') ADVANCE(72);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(161);
      END_STATE();
    case 147:
      ACCEPT_TOKEN(sym__token_single_word);
      if (lookahead == '-') ADVANCE(51);
      if (lookahead == 'e') ADVANCE(140);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(161);
      END_STATE();
    case 148:
      ACCEPT_TOKEN(sym__token_single_word);
      if (lookahead == '-') ADVANCE(51);
      if (lookahead == 'f') ADVANCE(57);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(161);
      END_STATE();
    case 149:
      ACCEPT_TOKEN(sym__token_single_word);
      if (lookahead == '-') ADVANCE(51);
      if (lookahead == 'i') ADVANCE(153);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(161);
      END_STATE();
    case 150:
      ACCEPT_TOKEN(sym__token_single_word);
      if (lookahead == '-') ADVANCE(51);
      if (lookahead == 'k') ADVANCE(146);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(161);
      END_STATE();
    case 151:
      ACCEPT_TOKEN(sym__token_single_word);
      if (lookahead == '-') ADVANCE(51);
      if (lookahead == 'l') ADVANCE(159);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(161);
      END_STATE();
    case 152:
      ACCEPT_TOKEN(sym__token_single_word);
      if (lookahead == '-') ADVANCE(51);
      if (lookahead == 'l') ADVANCE(69);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(161);
      END_STATE();
    case 153:
      ACCEPT_TOKEN(sym__token_single_word);
      if (lookahead == '-') ADVANCE(51);
      if (lookahead == 'l') ADVANCE(152);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(161);
      END_STATE();
    case 154:
      ACCEPT_TOKEN(sym__token_single_word);
      if (lookahead == '-') ADVANCE(51);
      if (lookahead == 'm') ADVANCE(162);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(161);
      END_STATE();
    case 155:
      ACCEPT_TOKEN(sym__token_single_word);
      if (lookahead == '-') ADVANCE(51);
      if (lookahead == 'o') ADVANCE(154);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(161);
      END_STATE();
    case 156:
      ACCEPT_TOKEN(sym__token_single_word);
      if (lookahead == '-') ADVANCE(51);
      if (lookahead == 'p') ADVANCE(158);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(161);
      END_STATE();
    case 157:
      ACCEPT_TOKEN(sym__token_single_word);
      if (lookahead == '-') ADVANCE(51);
      if (lookahead == 'r') ADVANCE(155);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(161);
      END_STATE();
    case 158:
      ACCEPT_TOKEN(sym__token_single_word);
      if (lookahead == '-') ADVANCE(51);
      if (lookahead == 'r') ADVANCE(147);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(161);
      END_STATE();
    case 159:
      ACCEPT_TOKEN(sym__token_single_word);
      if (lookahead == '-') ADVANCE(51);
      if (lookahead == 's') ADVANCE(145);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(161);
      END_STATE();
    case 160:
      ACCEPT_TOKEN(sym__token_single_word);
      if (lookahead == '-') ADVANCE(51);
      if (lookahead == 't') ADVANCE(69);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(161);
      END_STATE();
    case 161:
      ACCEPT_TOKEN(sym__token_single_word);
      if (lookahead == '-') ADVANCE(51);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(161);
      END_STATE();
    case 162:
      ACCEPT_TOKEN(sym__token_single_word);
      if (lookahead == '-') ADVANCE(11);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(161);
      END_STATE();
    case 163:
      ACCEPT_TOKEN(sym__token_special_char);
      END_STATE();
    default:
      return false;
  }
}

static TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 52},
  [2] = {.lex_state = 52},
  [3] = {.lex_state = 52},
  [4] = {.lex_state = 48},
  [5] = {.lex_state = 47},
  [6] = {.lex_state = 47},
  [7] = {.lex_state = 53},
  [8] = {.lex_state = 53},
  [9] = {.lex_state = 52},
  [10] = {.lex_state = 52},
  [11] = {.lex_state = 52},
  [12] = {.lex_state = 52},
  [13] = {.lex_state = 52},
  [14] = {.lex_state = 52},
  [15] = {.lex_state = 52},
  [16] = {.lex_state = 52},
  [17] = {.lex_state = 52},
  [18] = {.lex_state = 52},
  [19] = {.lex_state = 52},
  [20] = {.lex_state = 52},
  [21] = {.lex_state = 52},
  [22] = {.lex_state = 52},
  [23] = {.lex_state = 48},
  [24] = {.lex_state = 49},
  [25] = {.lex_state = 49},
  [26] = {.lex_state = 49},
  [27] = {.lex_state = 49},
  [28] = {.lex_state = 49},
  [29] = {.lex_state = 49},
  [30] = {.lex_state = 49},
  [31] = {.lex_state = 49},
  [32] = {.lex_state = 49},
  [33] = {.lex_state = 49},
  [34] = {.lex_state = 1},
  [35] = {.lex_state = 49},
  [36] = {.lex_state = 1},
  [37] = {.lex_state = 1},
  [38] = {.lex_state = 1},
  [39] = {.lex_state = 0},
  [40] = {.lex_state = 0},
  [41] = {.lex_state = 53},
  [42] = {.lex_state = 0},
};

static uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [aux_sym__keyword_if_token1] = ACTIONS(1),
    [aux_sym__keyword_else_if_token1] = ACTIONS(1),
    [sym__keyword_else] = ACTIONS(1),
    [aux_sym__command_multi_arg_token1] = ACTIONS(1),
    [aux_sym__command_single_arg_token1] = ACTIONS(1),
    [aux_sym__command_make_token1] = ACTIONS(1),
    [aux_sym__command_arg_list_token1] = ACTIONS(1),
    [aux_sym__command_arg_list_token2] = ACTIONS(1),
    [aux_sym__command_arg_list_token3] = ACTIONS(1),
    [aux_sym___command_spread_on_token1] = ACTIONS(1),
    [aux_sym___command_spread_on_token2] = ACTIONS(1),
    [aux_sym___command_add_to_token1] = ACTIONS(1),
    [aux_sym___command_add_to_token2] = ACTIONS(1),
    [aux_sym___command_make_as_a_token1] = ACTIONS(1),
    [sym__token_special_char] = ACTIONS(1),
  },
  [1] = {
    [sym_program] = STATE(42),
    [sym_keyword] = STATE(2),
    [sym__keyword_if] = STATE(19),
    [sym__keyword_else_if] = STATE(19),
    [sym_command] = STATE(2),
    [sym__command_multi_arg] = STATE(13),
    [sym__command_single_arg] = STATE(13),
    [sym__command_make] = STATE(13),
    [sym__command_split] = STATE(13),
    [sym__command_condition] = STATE(13),
    [sym___command_spread_on] = STATE(13),
    [sym___command_add_to] = STATE(13),
    [sym___command_make_as_a] = STATE(13),
    [sym_token] = STATE(8),
    [aux_sym_program_repeat1] = STATE(2),
    [ts_builtin_sym_end] = ACTIONS(3),
    [aux_sym__keyword_if_token1] = ACTIONS(5),
    [aux_sym__keyword_else_if_token1] = ACTIONS(7),
    [sym__keyword_else] = ACTIONS(9),
    [aux_sym__command_multi_arg_token1] = ACTIONS(11),
    [aux_sym__command_single_arg_token1] = ACTIONS(13),
    [aux_sym__command_make_token1] = ACTIONS(15),
    [aux_sym___command_spread_on_token1] = ACTIONS(17),
    [aux_sym___command_add_to_token1] = ACTIONS(19),
    [sym__token_multi_word] = ACTIONS(21),
    [sym__token_single_word] = ACTIONS(21),
    [sym__token_special_char] = ACTIONS(23),
  },
  [2] = {
    [sym_keyword] = STATE(3),
    [sym__keyword_if] = STATE(19),
    [sym__keyword_else_if] = STATE(19),
    [sym_command] = STATE(3),
    [sym__command_multi_arg] = STATE(13),
    [sym__command_single_arg] = STATE(13),
    [sym__command_make] = STATE(13),
    [sym__command_split] = STATE(13),
    [sym__command_condition] = STATE(13),
    [sym___command_spread_on] = STATE(13),
    [sym___command_add_to] = STATE(13),
    [sym___command_make_as_a] = STATE(13),
    [sym_token] = STATE(8),
    [aux_sym_program_repeat1] = STATE(3),
    [ts_builtin_sym_end] = ACTIONS(25),
    [aux_sym__keyword_if_token1] = ACTIONS(5),
    [aux_sym__keyword_else_if_token1] = ACTIONS(7),
    [sym__keyword_else] = ACTIONS(9),
    [aux_sym__command_multi_arg_token1] = ACTIONS(11),
    [aux_sym__command_single_arg_token1] = ACTIONS(13),
    [aux_sym__command_make_token1] = ACTIONS(15),
    [aux_sym___command_spread_on_token1] = ACTIONS(17),
    [aux_sym___command_add_to_token1] = ACTIONS(19),
    [sym__token_multi_word] = ACTIONS(21),
    [sym__token_single_word] = ACTIONS(21),
    [sym__token_special_char] = ACTIONS(23),
  },
  [3] = {
    [sym_keyword] = STATE(3),
    [sym__keyword_if] = STATE(19),
    [sym__keyword_else_if] = STATE(19),
    [sym_command] = STATE(3),
    [sym__command_multi_arg] = STATE(13),
    [sym__command_single_arg] = STATE(13),
    [sym__command_make] = STATE(13),
    [sym__command_split] = STATE(13),
    [sym__command_condition] = STATE(13),
    [sym___command_spread_on] = STATE(13),
    [sym___command_add_to] = STATE(13),
    [sym___command_make_as_a] = STATE(13),
    [sym_token] = STATE(8),
    [aux_sym_program_repeat1] = STATE(3),
    [ts_builtin_sym_end] = ACTIONS(27),
    [aux_sym__keyword_if_token1] = ACTIONS(29),
    [aux_sym__keyword_else_if_token1] = ACTIONS(32),
    [sym__keyword_else] = ACTIONS(35),
    [aux_sym__command_multi_arg_token1] = ACTIONS(38),
    [aux_sym__command_single_arg_token1] = ACTIONS(41),
    [aux_sym__command_make_token1] = ACTIONS(44),
    [aux_sym___command_spread_on_token1] = ACTIONS(47),
    [aux_sym___command_add_to_token1] = ACTIONS(50),
    [sym__token_multi_word] = ACTIONS(53),
    [sym__token_single_word] = ACTIONS(53),
    [sym__token_special_char] = ACTIONS(56),
  },
  [4] = {
    [sym_command] = STATE(22),
    [sym__command_multi_arg] = STATE(13),
    [sym__command_single_arg] = STATE(13),
    [sym__command_make] = STATE(13),
    [sym__command_split] = STATE(13),
    [sym__command_condition] = STATE(13),
    [sym___command_spread_on] = STATE(13),
    [sym___command_add_to] = STATE(13),
    [sym___command_make_as_a] = STATE(13),
    [sym_token] = STATE(41),
    [aux_sym__command_multi_arg_token1] = ACTIONS(11),
    [aux_sym__command_single_arg_token1] = ACTIONS(13),
    [aux_sym__command_make_token1] = ACTIONS(15),
    [aux_sym___command_spread_on_token1] = ACTIONS(17),
    [aux_sym___command_add_to_token1] = ACTIONS(19),
    [aux_sym___command_make_as_a_token1] = ACTIONS(59),
    [sym__token_multi_word] = ACTIONS(21),
    [sym__token_single_word] = ACTIONS(21),
    [sym__token_special_char] = ACTIONS(23),
  },
};

static uint16_t ts_small_parse_table[] = {
  [0] = 10,
    ACTIONS(11), 1,
      aux_sym__command_multi_arg_token1,
    ACTIONS(13), 1,
      aux_sym__command_single_arg_token1,
    ACTIONS(15), 1,
      aux_sym__command_make_token1,
    ACTIONS(17), 1,
      aux_sym___command_spread_on_token1,
    ACTIONS(19), 1,
      aux_sym___command_add_to_token1,
    ACTIONS(23), 1,
      sym__token_special_char,
    STATE(14), 1,
      sym_command,
    STATE(41), 1,
      sym_token,
    ACTIONS(21), 2,
      sym__token_multi_word,
      sym__token_single_word,
    STATE(13), 8,
      sym__command_multi_arg,
      sym__command_single_arg,
      sym__command_make,
      sym__command_split,
      sym__command_condition,
      sym___command_spread_on,
      sym___command_add_to,
      sym___command_make_as_a,
  [39] = 10,
    ACTIONS(11), 1,
      aux_sym__command_multi_arg_token1,
    ACTIONS(13), 1,
      aux_sym__command_single_arg_token1,
    ACTIONS(15), 1,
      aux_sym__command_make_token1,
    ACTIONS(17), 1,
      aux_sym___command_spread_on_token1,
    ACTIONS(19), 1,
      aux_sym___command_add_to_token1,
    ACTIONS(23), 1,
      sym__token_special_char,
    STATE(16), 1,
      sym_command,
    STATE(41), 1,
      sym_token,
    ACTIONS(21), 2,
      sym__token_multi_word,
      sym__token_single_word,
    STATE(13), 8,
      sym__command_multi_arg,
      sym__command_single_arg,
      sym__command_make,
      sym__command_split,
      sym__command_condition,
      sym___command_spread_on,
      sym___command_add_to,
      sym___command_make_as_a,
  [78] = 2,
    ACTIONS(61), 4,
      ts_builtin_sym_end,
      aux_sym__keyword_else_if_token1,
      aux_sym__command_condition_token1,
      sym__token_special_char,
    ACTIONS(63), 9,
      aux_sym__keyword_if_token1,
      sym__keyword_else,
      aux_sym__command_multi_arg_token1,
      aux_sym__command_single_arg_token1,
      aux_sym__command_make_token1,
      aux_sym___command_spread_on_token1,
      aux_sym___command_add_to_token1,
      sym__token_multi_word,
      sym__token_single_word,
  [96] = 3,
    ACTIONS(69), 1,
      aux_sym__command_condition_token1,
    ACTIONS(65), 3,
      ts_builtin_sym_end,
      aux_sym__keyword_else_if_token1,
      sym__token_special_char,
    ACTIONS(67), 9,
      aux_sym__keyword_if_token1,
      sym__keyword_else,
      aux_sym__command_multi_arg_token1,
      aux_sym__command_single_arg_token1,
      aux_sym__command_make_token1,
      aux_sym___command_spread_on_token1,
      aux_sym___command_add_to_token1,
      sym__token_multi_word,
      sym__token_single_word,
  [116] = 2,
    ACTIONS(71), 3,
      ts_builtin_sym_end,
      aux_sym__keyword_else_if_token1,
      sym__token_special_char,
    ACTIONS(73), 9,
      aux_sym__keyword_if_token1,
      sym__keyword_else,
      aux_sym__command_multi_arg_token1,
      aux_sym__command_single_arg_token1,
      aux_sym__command_make_token1,
      aux_sym___command_spread_on_token1,
      aux_sym___command_add_to_token1,
      sym__token_multi_word,
      sym__token_single_word,
  [133] = 2,
    ACTIONS(75), 3,
      ts_builtin_sym_end,
      aux_sym__keyword_else_if_token1,
      sym__token_special_char,
    ACTIONS(77), 9,
      aux_sym__keyword_if_token1,
      sym__keyword_else,
      aux_sym__command_multi_arg_token1,
      aux_sym__command_single_arg_token1,
      aux_sym__command_make_token1,
      aux_sym___command_spread_on_token1,
      aux_sym___command_add_to_token1,
      sym__token_multi_word,
      sym__token_single_word,
  [150] = 2,
    ACTIONS(61), 3,
      ts_builtin_sym_end,
      aux_sym__keyword_else_if_token1,
      sym__token_special_char,
    ACTIONS(63), 9,
      aux_sym__keyword_if_token1,
      sym__keyword_else,
      aux_sym__command_multi_arg_token1,
      aux_sym__command_single_arg_token1,
      aux_sym__command_make_token1,
      aux_sym___command_spread_on_token1,
      aux_sym___command_add_to_token1,
      sym__token_multi_word,
      sym__token_single_word,
  [167] = 2,
    ACTIONS(79), 3,
      ts_builtin_sym_end,
      aux_sym__keyword_else_if_token1,
      sym__token_special_char,
    ACTIONS(81), 9,
      aux_sym__keyword_if_token1,
      sym__keyword_else,
      aux_sym__command_multi_arg_token1,
      aux_sym__command_single_arg_token1,
      aux_sym__command_make_token1,
      aux_sym___command_spread_on_token1,
      aux_sym___command_add_to_token1,
      sym__token_multi_word,
      sym__token_single_word,
  [184] = 2,
    ACTIONS(83), 3,
      ts_builtin_sym_end,
      aux_sym__keyword_else_if_token1,
      sym__token_special_char,
    ACTIONS(85), 9,
      aux_sym__keyword_if_token1,
      sym__keyword_else,
      aux_sym__command_multi_arg_token1,
      aux_sym__command_single_arg_token1,
      aux_sym__command_make_token1,
      aux_sym___command_spread_on_token1,
      aux_sym___command_add_to_token1,
      sym__token_multi_word,
      sym__token_single_word,
  [201] = 2,
    ACTIONS(87), 3,
      ts_builtin_sym_end,
      aux_sym__keyword_else_if_token1,
      sym__token_special_char,
    ACTIONS(89), 9,
      aux_sym__keyword_if_token1,
      sym__keyword_else,
      aux_sym__command_multi_arg_token1,
      aux_sym__command_single_arg_token1,
      aux_sym__command_make_token1,
      aux_sym___command_spread_on_token1,
      aux_sym___command_add_to_token1,
      sym__token_multi_word,
      sym__token_single_word,
  [218] = 2,
    ACTIONS(91), 3,
      ts_builtin_sym_end,
      aux_sym__keyword_else_if_token1,
      sym__token_special_char,
    ACTIONS(93), 9,
      aux_sym__keyword_if_token1,
      sym__keyword_else,
      aux_sym__command_multi_arg_token1,
      aux_sym__command_single_arg_token1,
      aux_sym__command_make_token1,
      aux_sym___command_spread_on_token1,
      aux_sym___command_add_to_token1,
      sym__token_multi_word,
      sym__token_single_word,
  [235] = 2,
    ACTIONS(95), 3,
      ts_builtin_sym_end,
      aux_sym__keyword_else_if_token1,
      sym__token_special_char,
    ACTIONS(97), 9,
      aux_sym__keyword_if_token1,
      sym__keyword_else,
      aux_sym__command_multi_arg_token1,
      aux_sym__command_single_arg_token1,
      aux_sym__command_make_token1,
      aux_sym___command_spread_on_token1,
      aux_sym___command_add_to_token1,
      sym__token_multi_word,
      sym__token_single_word,
  [252] = 2,
    ACTIONS(99), 3,
      ts_builtin_sym_end,
      aux_sym__keyword_else_if_token1,
      sym__token_special_char,
    ACTIONS(101), 9,
      aux_sym__keyword_if_token1,
      sym__keyword_else,
      aux_sym__command_multi_arg_token1,
      aux_sym__command_single_arg_token1,
      aux_sym__command_make_token1,
      aux_sym___command_spread_on_token1,
      aux_sym___command_add_to_token1,
      sym__token_multi_word,
      sym__token_single_word,
  [269] = 2,
    ACTIONS(103), 3,
      ts_builtin_sym_end,
      aux_sym__keyword_else_if_token1,
      sym__token_special_char,
    ACTIONS(105), 9,
      aux_sym__keyword_if_token1,
      sym__keyword_else,
      aux_sym__command_multi_arg_token1,
      aux_sym__command_single_arg_token1,
      aux_sym__command_make_token1,
      aux_sym___command_spread_on_token1,
      aux_sym___command_add_to_token1,
      sym__token_multi_word,
      sym__token_single_word,
  [286] = 2,
    ACTIONS(107), 3,
      ts_builtin_sym_end,
      aux_sym__keyword_else_if_token1,
      sym__token_special_char,
    ACTIONS(109), 9,
      aux_sym__keyword_if_token1,
      sym__keyword_else,
      aux_sym__command_multi_arg_token1,
      aux_sym__command_single_arg_token1,
      aux_sym__command_make_token1,
      aux_sym___command_spread_on_token1,
      aux_sym___command_add_to_token1,
      sym__token_multi_word,
      sym__token_single_word,
  [303] = 2,
    ACTIONS(111), 3,
      ts_builtin_sym_end,
      aux_sym__keyword_else_if_token1,
      sym__token_special_char,
    ACTIONS(113), 9,
      aux_sym__keyword_if_token1,
      sym__keyword_else,
      aux_sym__command_multi_arg_token1,
      aux_sym__command_single_arg_token1,
      aux_sym__command_make_token1,
      aux_sym___command_spread_on_token1,
      aux_sym___command_add_to_token1,
      sym__token_multi_word,
      sym__token_single_word,
  [320] = 2,
    ACTIONS(115), 3,
      ts_builtin_sym_end,
      aux_sym__keyword_else_if_token1,
      sym__token_special_char,
    ACTIONS(117), 9,
      aux_sym__keyword_if_token1,
      sym__keyword_else,
      aux_sym__command_multi_arg_token1,
      aux_sym__command_single_arg_token1,
      aux_sym__command_make_token1,
      aux_sym___command_spread_on_token1,
      aux_sym___command_add_to_token1,
      sym__token_multi_word,
      sym__token_single_word,
  [337] = 2,
    ACTIONS(119), 3,
      ts_builtin_sym_end,
      aux_sym__keyword_else_if_token1,
      sym__token_special_char,
    ACTIONS(121), 9,
      aux_sym__keyword_if_token1,
      sym__keyword_else,
      aux_sym__command_multi_arg_token1,
      aux_sym__command_single_arg_token1,
      aux_sym__command_make_token1,
      aux_sym___command_spread_on_token1,
      aux_sym___command_add_to_token1,
      sym__token_multi_word,
      sym__token_single_word,
  [354] = 2,
    ACTIONS(61), 1,
      sym__token_special_char,
    ACTIONS(63), 8,
      aux_sym__command_multi_arg_token1,
      aux_sym__command_single_arg_token1,
      aux_sym__command_make_token1,
      aux_sym___command_spread_on_token1,
      aux_sym___command_add_to_token1,
      aux_sym___command_make_as_a_token1,
      sym__token_multi_word,
      sym__token_single_word,
  [368] = 4,
    ACTIONS(126), 1,
      sym__token_single_word,
    STATE(24), 1,
      aux_sym__command_arg_list_repeat1,
    STATE(38), 1,
      sym_token,
    ACTIONS(123), 2,
      sym__token_multi_word,
      sym__token_special_char,
  [382] = 4,
    ACTIONS(131), 1,
      sym__token_single_word,
    STATE(24), 1,
      aux_sym__command_arg_list_repeat1,
    STATE(37), 1,
      sym_token,
    ACTIONS(129), 2,
      sym__token_multi_word,
      sym__token_special_char,
  [396] = 4,
    ACTIONS(135), 1,
      sym__token_single_word,
    STATE(20), 1,
      sym_token,
    STATE(21), 1,
      sym_type,
    ACTIONS(133), 2,
      sym__token_multi_word,
      sym__token_special_char,
  [410] = 4,
    ACTIONS(131), 1,
      sym__token_single_word,
    STATE(25), 1,
      aux_sym__command_arg_list_repeat1,
    STATE(38), 1,
      sym_token,
    ACTIONS(129), 2,
      sym__token_multi_word,
      sym__token_special_char,
  [424] = 3,
    ACTIONS(131), 1,
      sym__token_single_word,
    STATE(40), 1,
      sym_token,
    ACTIONS(129), 2,
      sym__token_multi_word,
      sym__token_special_char,
  [435] = 3,
    ACTIONS(135), 1,
      sym__token_single_word,
    STATE(17), 1,
      sym_token,
    ACTIONS(133), 2,
      sym__token_multi_word,
      sym__token_special_char,
  [446] = 3,
    ACTIONS(135), 1,
      sym__token_single_word,
    STATE(15), 1,
      sym_token,
    ACTIONS(133), 2,
      sym__token_multi_word,
      sym__token_special_char,
  [457] = 3,
    ACTIONS(139), 1,
      sym__token_single_word,
    STATE(4), 1,
      sym_token,
    ACTIONS(137), 2,
      sym__token_multi_word,
      sym__token_special_char,
  [468] = 3,
    ACTIONS(135), 1,
      sym__token_single_word,
    STATE(9), 1,
      sym_token,
    ACTIONS(133), 2,
      sym__token_multi_word,
      sym__token_special_char,
  [479] = 3,
    ACTIONS(131), 1,
      sym__token_single_word,
    STATE(39), 1,
      sym_token,
    ACTIONS(129), 2,
      sym__token_multi_word,
      sym__token_special_char,
  [490] = 1,
    ACTIONS(61), 4,
      aux_sym__command_arg_list_token2,
      aux_sym__command_arg_list_token3,
      aux_sym___command_spread_on_token2,
      aux_sym___command_add_to_token2,
  [497] = 2,
    ACTIONS(143), 1,
      sym__token_single_word,
    ACTIONS(141), 2,
      sym__token_multi_word,
      sym__token_special_char,
  [505] = 2,
    ACTIONS(145), 1,
      aux_sym__command_arg_list_token1,
    STATE(18), 1,
      sym__command_arg_list,
  [512] = 2,
    ACTIONS(147), 1,
      aux_sym__command_arg_list_token2,
    ACTIONS(149), 1,
      aux_sym__command_arg_list_token3,
  [519] = 1,
    ACTIONS(147), 1,
      aux_sym__command_arg_list_token2,
  [523] = 1,
    ACTIONS(151), 1,
      aux_sym___command_add_to_token2,
  [527] = 1,
    ACTIONS(153), 1,
      aux_sym___command_spread_on_token2,
  [531] = 1,
    ACTIONS(69), 1,
      aux_sym__command_condition_token1,
  [535] = 1,
    ACTIONS(155), 1,
      ts_builtin_sym_end,
};

static uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(5)] = 0,
  [SMALL_STATE(6)] = 39,
  [SMALL_STATE(7)] = 78,
  [SMALL_STATE(8)] = 96,
  [SMALL_STATE(9)] = 116,
  [SMALL_STATE(10)] = 133,
  [SMALL_STATE(11)] = 150,
  [SMALL_STATE(12)] = 167,
  [SMALL_STATE(13)] = 184,
  [SMALL_STATE(14)] = 201,
  [SMALL_STATE(15)] = 218,
  [SMALL_STATE(16)] = 235,
  [SMALL_STATE(17)] = 252,
  [SMALL_STATE(18)] = 269,
  [SMALL_STATE(19)] = 286,
  [SMALL_STATE(20)] = 303,
  [SMALL_STATE(21)] = 320,
  [SMALL_STATE(22)] = 337,
  [SMALL_STATE(23)] = 354,
  [SMALL_STATE(24)] = 368,
  [SMALL_STATE(25)] = 382,
  [SMALL_STATE(26)] = 396,
  [SMALL_STATE(27)] = 410,
  [SMALL_STATE(28)] = 424,
  [SMALL_STATE(29)] = 435,
  [SMALL_STATE(30)] = 446,
  [SMALL_STATE(31)] = 457,
  [SMALL_STATE(32)] = 468,
  [SMALL_STATE(33)] = 479,
  [SMALL_STATE(34)] = 490,
  [SMALL_STATE(35)] = 497,
  [SMALL_STATE(36)] = 505,
  [SMALL_STATE(37)] = 512,
  [SMALL_STATE(38)] = 519,
  [SMALL_STATE(39)] = 523,
  [SMALL_STATE(40)] = 527,
  [SMALL_STATE(41)] = 531,
  [SMALL_STATE(42)] = 535,
};

static TSParseActionEntry ts_parse_actions[] = {
  [0] = {.count = 0, .reusable = false},
  [1] = {.count = 1, .reusable = false}, RECOVER(),
  [3] = {.count = 1, .reusable = true}, REDUCE(sym_program, 0),
  [5] = {.count = 1, .reusable = false}, SHIFT(5),
  [7] = {.count = 1, .reusable = true}, SHIFT(6),
  [9] = {.count = 1, .reusable = false}, SHIFT(19),
  [11] = {.count = 1, .reusable = false}, SHIFT(36),
  [13] = {.count = 1, .reusable = false}, SHIFT(32),
  [15] = {.count = 1, .reusable = false}, SHIFT(31),
  [17] = {.count = 1, .reusable = false}, SHIFT(28),
  [19] = {.count = 1, .reusable = false}, SHIFT(33),
  [21] = {.count = 1, .reusable = false}, SHIFT(7),
  [23] = {.count = 1, .reusable = true}, SHIFT(7),
  [25] = {.count = 1, .reusable = true}, REDUCE(sym_program, 1),
  [27] = {.count = 1, .reusable = true}, REDUCE(aux_sym_program_repeat1, 2),
  [29] = {.count = 2, .reusable = false}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(5),
  [32] = {.count = 2, .reusable = true}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(6),
  [35] = {.count = 2, .reusable = false}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(19),
  [38] = {.count = 2, .reusable = false}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(36),
  [41] = {.count = 2, .reusable = false}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(32),
  [44] = {.count = 2, .reusable = false}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(31),
  [47] = {.count = 2, .reusable = false}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(28),
  [50] = {.count = 2, .reusable = false}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(33),
  [53] = {.count = 2, .reusable = false}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(7),
  [56] = {.count = 2, .reusable = true}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(7),
  [59] = {.count = 1, .reusable = false}, SHIFT(26),
  [61] = {.count = 1, .reusable = true}, REDUCE(sym_token, 1),
  [63] = {.count = 1, .reusable = false}, REDUCE(sym_token, 1),
  [65] = {.count = 1, .reusable = true}, REDUCE(aux_sym_program_repeat1, 1),
  [67] = {.count = 1, .reusable = false}, REDUCE(aux_sym_program_repeat1, 1),
  [69] = {.count = 1, .reusable = true}, SHIFT(10),
  [71] = {.count = 1, .reusable = true}, REDUCE(sym__command_single_arg, 2),
  [73] = {.count = 1, .reusable = false}, REDUCE(sym__command_single_arg, 2),
  [75] = {.count = 1, .reusable = true}, REDUCE(sym__command_condition, 2),
  [77] = {.count = 1, .reusable = false}, REDUCE(sym__command_condition, 2),
  [79] = {.count = 1, .reusable = true}, REDUCE(sym__command_arg_list, 4),
  [81] = {.count = 1, .reusable = false}, REDUCE(sym__command_arg_list, 4),
  [83] = {.count = 1, .reusable = true}, REDUCE(sym_command, 1),
  [85] = {.count = 1, .reusable = false}, REDUCE(sym_command, 1),
  [87] = {.count = 1, .reusable = true}, REDUCE(sym__keyword_if, 2),
  [89] = {.count = 1, .reusable = false}, REDUCE(sym__keyword_if, 2),
  [91] = {.count = 1, .reusable = true}, REDUCE(sym___command_add_to, 4),
  [93] = {.count = 1, .reusable = false}, REDUCE(sym___command_add_to, 4),
  [95] = {.count = 1, .reusable = true}, REDUCE(sym__keyword_else_if, 2),
  [97] = {.count = 1, .reusable = false}, REDUCE(sym__keyword_else_if, 2),
  [99] = {.count = 1, .reusable = true}, REDUCE(sym___command_spread_on, 4),
  [101] = {.count = 1, .reusable = false}, REDUCE(sym___command_spread_on, 4),
  [103] = {.count = 1, .reusable = true}, REDUCE(sym__command_multi_arg, 2),
  [105] = {.count = 1, .reusable = false}, REDUCE(sym__command_multi_arg, 2),
  [107] = {.count = 1, .reusable = true}, REDUCE(sym_keyword, 1),
  [109] = {.count = 1, .reusable = false}, REDUCE(sym_keyword, 1),
  [111] = {.count = 1, .reusable = true}, REDUCE(sym_type, 1, .production_id = 1),
  [113] = {.count = 1, .reusable = false}, REDUCE(sym_type, 1, .production_id = 1),
  [115] = {.count = 1, .reusable = true}, REDUCE(sym___command_make_as_a, 4),
  [117] = {.count = 1, .reusable = false}, REDUCE(sym___command_make_as_a, 4),
  [119] = {.count = 1, .reusable = true}, REDUCE(sym__command_make, 3),
  [121] = {.count = 1, .reusable = false}, REDUCE(sym__command_make, 3),
  [123] = {.count = 2, .reusable = true}, REDUCE(aux_sym__command_arg_list_repeat1, 2), SHIFT_REPEAT(34),
  [126] = {.count = 2, .reusable = false}, REDUCE(aux_sym__command_arg_list_repeat1, 2), SHIFT_REPEAT(34),
  [129] = {.count = 1, .reusable = true}, SHIFT(34),
  [131] = {.count = 1, .reusable = false}, SHIFT(34),
  [133] = {.count = 1, .reusable = true}, SHIFT(11),
  [135] = {.count = 1, .reusable = false}, SHIFT(11),
  [137] = {.count = 1, .reusable = true}, SHIFT(23),
  [139] = {.count = 1, .reusable = false}, SHIFT(23),
  [141] = {.count = 1, .reusable = true}, REDUCE(aux_sym__command_arg_list_repeat1, 2),
  [143] = {.count = 1, .reusable = false}, REDUCE(aux_sym__command_arg_list_repeat1, 2),
  [145] = {.count = 1, .reusable = true}, SHIFT(27),
  [147] = {.count = 1, .reusable = true}, SHIFT(35),
  [149] = {.count = 1, .reusable = true}, SHIFT(12),
  [151] = {.count = 1, .reusable = true}, SHIFT(30),
  [153] = {.count = 1, .reusable = true}, SHIFT(29),
  [155] = {.count = 1, .reusable = true},  ACCEPT_INPUT(),
};

#ifdef __cplusplus
extern "C" {
#endif
#ifdef _WIN32
#define extern __declspec(dllexport)
#endif

extern const TSLanguage *tree_sitter_FoodScript(void) {
  static TSLanguage language = {
    .version = LANGUAGE_VERSION,
    .symbol_count = SYMBOL_COUNT,
    .alias_count = ALIAS_COUNT,
    .token_count = TOKEN_COUNT,
    .large_state_count = LARGE_STATE_COUNT,
    .symbol_metadata = ts_symbol_metadata,
    .parse_table = (const unsigned short *)ts_parse_table,
    .small_parse_table = (const uint16_t *)ts_small_parse_table,
    .small_parse_table_map = (const uint32_t *)ts_small_parse_table_map,
    .parse_actions = ts_parse_actions,
    .lex_modes = ts_lex_modes,
    .symbol_names = ts_symbol_names,
    .public_symbol_map = ts_symbol_map,
    .alias_sequences = (const TSSymbol *)ts_alias_sequences,
    .field_count = FIELD_COUNT,
    .max_alias_sequence_length = MAX_ALIAS_SEQUENCE_LENGTH,
    .lex_fn = ts_lex,
    .external_token_count = EXTERNAL_TOKEN_COUNT,
  };
  return &language;
}
#ifdef __cplusplus
}
#endif
