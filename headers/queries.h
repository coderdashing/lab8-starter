// This module re-implements getQueries using the string_span struct from span.h.

// Necessary to refer to "struct string_span"
#ifndef QUERIES_H
#define QUERIES_H
#include "span.h"

struct string_span getQueries(char *url);
#endif
