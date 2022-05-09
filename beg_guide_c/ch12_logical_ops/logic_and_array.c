#include <stdio.h>

main()
{
  // set up array for a lst anme and get it from the user
  char name[25];
  printf("What is your last name? ");
  printf("Please capitalize the first letter!\n");
  scanf(" %s", name);
  // for a string array you do not need the address-of (&) operator
  if ((name[0] >= 'P') && (name[0] <= 'S'))
  {
    printf("You must go to room 2432 ");
    printf("for your tickets.\n");
  }
  else
  {
    printf("You ca get your tickets here.\n");
  }

  return 0;
}
