/* String terminators are used to determine when a string has ended.
The terminator is automatically added at the end of any string.
It is somtimes called 'null zero', as in the first entry of the ASCII table */

/* String length never includes null zero. */

#include <stdio.h>

int main()
{ 
  // several len 9 strings.
  char day[9] = "Wednesday";
  char date[9] = "August 10";
  char phrase[9] = "I am here.";

  return 0;
}

// Chars are NOT strings.
char x = 'x';

// is of length 1, but has no terminator.

char X = "X";

// is of length 1, but has a /0 terminator.
