#include <stdio.h>

main()
{

  // Set up the variables that scanf will fill.
  char firstInitial;
  char lastInitial;
  int age;
  int favorite_number;

  printf("What letter does your first name begin with?\n");
  scanf(" %c", &firstInitial);

  printf("What letter does your last name begin with?\n");
  scanf(" %c", &lastInitial);

  printf("How old are you?\n");
  scanf(" %d", &age);

  printf("What is your favorite number (int only!)?\n");
  scanf(" %d", &favorite_number);

  printf("\n Your initials are %c.%c. and you are %d years old.", firstInitial, lastInitial, age);
  printf("\n Your favorite number is %d.\n\n", favorite_number);

  return 0;
}
