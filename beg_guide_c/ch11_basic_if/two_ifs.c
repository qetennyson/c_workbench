#include <stdio.h>
#define CURRENTYEAR 2022

main()
{
  int yearBorn, age;

  printf("What year were you born?\n");
  scanf(" %d", &yearBorn);

  // this if statement can do some data validation, making sure the year makes sense

  if (yearBorn > CURRENTYEAR)
  {
    printf("Nah dog.");
    scanf(" %d", &yearBorn);
  }

  age = CURRENTYEAR - yearBorn;

  printf("\nSo this year you will turn %d on your birthday!\n", age);

  // The seocnd if statement uses modulo to test if the year of birth was a leap year.

  if ((yearBorn % 4 == 0) == 0)
  {
    printf("\nYou were born in a Leap year--cool!\n");
  }
  return 0;
}
