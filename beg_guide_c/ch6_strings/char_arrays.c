/* Character arrays are just arrays of individual characters that form proper strings. */

// You must set the character array to an appropriate length, no less than the max. len. string that will be held there.
// You must remember to consider the terminator, especially when modifying the char. array in place (seems bad man).

#include <stdio.h>

main()
{

  char month[10] = "January";
  int index = 4;
  printf("%c, is at index %d", month[index], index);
  printf("%c, is at the last index", month[7]);

  month[0] = 'M';
  month[1] = 'a';
  month[2] = 'r';
  month[3] = 'c';
  month[4] = 'h';
  
  // if you forget the terminator, this prints "Marchry".
  printf("\n%s", month);

  month[5] = '\0';
  printf("\n%s", month);
  printf("\nMuch better.");
  
  return 0;
}
