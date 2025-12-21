/**
 * TODO -- document this (design decision ts)
 */

#include <stdio.h>
#include <stdlib.h>

// TODO -- might want this as an implementer defined thing?
static const size_t bufsize = 2048;

enum category {
    PACKAGE,

    IDENTIFIER,
    WALRUS, // a := 2 
    ASSIGNMENT, // a = 2 * b

    // TODO -- for now, we're considering programs with
    // one function + no args (typically, but not neccesarially main).
    FUNC, 
    CURLY_BRACKET_LEFT,
    CURLY_BRACKET_RIGHT,

    // Integer arithmetic
    PLUS,
    MINUS, 
    MULT,
    DIV,

    // Bools
    TRUE,
    FALSE,
    AND,
    OR,
    NOT,

    // Comparison
    EQ,
    LESS,
    GREATER, 
    LEQ,
    GEQ,

    BLANK, // Whitespace
};

/**
 * Tokenize the input program pointed to by fp.
 * 
 * @param fp
 */
void lex(FILE *fp) {

}

void nextword() {

}

void nextchar() {

}

void rollback() {

}