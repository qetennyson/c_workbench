#include <stdio.h>
#include <string.h>

// getch() doesn't allow for corrected / backspaced input

main()
{
  // get two initials with getch
  printf("What are your two initials?\n");
  firstInit = getch();

  // putch outputs the chars
  putch(firstInit);

  lastInit = getch();
  putch(lastInit);
}

