#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

main()
{
  int i;
  int ctr = 0;
  char ans;

  // declare array of 9 characters and then initializing
  char * movies[9] = {"Amour", 
                      "Argo",
                      "Beasts of the Souther Wild",
                      "Django Unchained",
                      "Les Miserables",
                      "Life of Pi",
                      "Lincoln",
                      "Silver Linings Playbook",
                      "Zero Dark Thirty"};
  int movieRatings[9]; // corresponding array of 9 ints for movie ratings

  char * tempmovie = "This will be used to sort rated movies";
  int swapped, temprating;
  int swaps = 0;

  printf("\n\n*** Oscar Season 2012 is here! ***\n\n");
  printf("Time to rate this year's best picture nominees:");

  for (i = 0; i < 9; i++)
  {
    printf("\nDid you see %s? (Y/N): ", movies[i]);
    scanf(" %c", &ans);

    if ((toupper(ans)) == 'Y')
    {
      printf("\nWhat was your rating on a scale ");
      printf("of 1-10: ");
      scanf(" %d", &movieRatings[i]); // parallel rating
      ctr++; // used to print only movies you've seen.
      continue;
    }
    else
    {
      movieRatings[i] = -1;
    }
  }

  do {
    swapped = 0;
    for (i = 0; i < 8; i++)
    {
      if (movieRatings[i] < movieRatings[i+1])
      {
        tempmovie = movies[i];
        temprating = movieRatings[i];
        movies[i] = movies[i+1];
        movieRatings[i] = movieRatings[i+1];
        movies[i+1] = tempmovie;
        movieRatings[i+1] = temprating;
        swapped = 1;
        swaps++;
      }
    }
    } while (swapped);
  
  // print movies in order
  printf("\n\n** Your Movie Ratings for the 2012 Oscar ");
  printf("Contenders **\n");
  
  for (i=0; i < ctr; i++)
  {
    printf("%s rated a %d!\n", movies[i], movieRatings[i]);
  }
  return 0;
}

                              
