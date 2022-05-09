#include <stdio.h>

main()
{
  int planets = 8;
  int friends = 6;
  int potterBooks = 7;
  int starWars = 6;
  int months = 12;
  int beatles = 4;
  int avengers = 6;
  int baseball = 9;
  int basketball = 5;
  int football = 11;

  // let's find out if combining some values would be enough to fill a baseball team
  // AND football team.

  if ((friends + beatles >= baseball) && (friends + avengers >= football))
  {
    printf("the cast of friends and the beatles could make a baseball and basketball team\n.");
    printf("friends and avengers could make a football team.");
  }
  else
  {
    printf("either the friends cant make a baseball team with the beatles\n");
    printf("or they can't make football with Avengers!\n");
  }

  // now we'll find out if the number of starwars movies is less than months in a year
  // OR the number of hp books is less than months in the year
  if ((starWars <= months) || (potterBooks <= months))
  {
    printf("You could watch all of star wars or read all of harry potter within a year at.\n");
    printf("at the rate of one entry per month.");
  }
  else
  {
    printf("There are too many books or movies to finish in a year.\n");
  }
  
  if (!(baseball + basketball > football))
  {
    printf("not enough players.");
  }
  else
  {
    printf("enough players");
  }
  return 0;
}
