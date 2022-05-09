#include <stdio.h>
#include <string.h>
#include <ctype.h>

// strcat() concatenates strings
// puts() sends a string to the screen
// gets() gets a string from the keyboard
// printf() and scanf() are not required to input / print strings in this program

main()
{
  char city[15];
  // 2 chars for the state abbrev. and one for null zero (ending char array);
  char st[3];
  char fullLocation[18] = "";

  puts("What town do you live in? ");
  gets(city);

  puts("What state do you live in? (2 letter)");
  gets(st);

  /* concatenating everything together into one */
  strcat(fullLocation, city);
  strcat(fullLocation, ", "); // adds a commoa and space to the city / state abbrev.
  strcat(fullLocation, st);

  puts("\nYou live in: ");
  puts(fullLocation);
  return 0;
}
