#include <stdio.h>
#include <string.h>

main()
{
  
  int ctr, numMovies, rating, favRating, leastRating;
  char movieName[40], favorite[40], least[40];

  // initialize favRating to 0, anything with a 1 or higher will replace it
  // leastRating should be 10 so any movie rated 9 or lower will replace it (??)
  favRating = 0;
  leastRating = 10;

  // find out how many movies the user has seen

  do {
    printf("How many movies have you seen this year? ");
    scanf(" %d", &numMovies);

    // if the user enters 0 or negative, remind them to not do that.
    if (numMovies < 1)
    {
      printf("No movies.  How could you rank them?\n");
    }

  } while (numMovies < 1);

  for (ctr = 1; ctr <= numMovies; ctr++)
  {
    // get the name of the movie, user's rating

    printf("\nWhat was the name of the movie? ");
    printf("(1-word titles only!) ");
    scanf(" %s", movieName); // char array doesn't require address-of (&)
    printf("On a scale of 1 to 10, what would ");
    printf("you rate it? ");
    scanf(" %d", &rating); // must have address of (&)

    // check whether it's their best movie so far
    if (rating > favRating)
    {
      strcpy(favorite, movieName);
      favRating = rating;
    }

    // check whether worst movie
    if (rating < leastRating)
    {
      strcpy(least, movieName);
      leastRating = rating;
    }

  }
  printf("\nYour fav movie was %s.\n", favorite);
  printf("\nYour least fav was %s.\n", least);
  
  return 0;
}
