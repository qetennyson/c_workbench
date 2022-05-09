#include <stdio.h>

// you can increment and decrement in C with ++, --, in either pre or postfix
// --i == prefix meaning it is computed before anything else on the line
// i-- == postfix is computed last

int i = 2, j = 5, n;
n = ++i * j;

// this means i becomes 3 before anything else, and n stores 15.

n = i++ * j;

// this means 5*2 is stored in n, and then i becomes 3.  it is not used int he calculation.
// these operators compile extremely efficiently
