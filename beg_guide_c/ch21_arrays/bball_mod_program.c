#include <stdio.h>

main()
{
  
  int gameScores[10] = {12, 5, 21, 15, 32, 10};
  int totalPoints = 0;
  int i;
  float avg;
  char name[25];
  
  printf("Enter your name: ");
  scanf(" %s", name);


  // Only need scores for last 4 games so the loop will cover ele. 6-9
  for (i = 6; i < 10; i++)
  {
    // add one ot the array number so the user will think of the first game as game 1 (not 0)
    printf("What did the player score in game %d? ", i+1);
    scanf(" %d", &gameScores[i]);
  }

  // Now that you have all 10 scores, loop through and get the average.
  // Do you not have to reset the i??
  for (i = 0; i < 10; i++)
  {
    totalPoints += gameScores[i];
  }

  // Use a floating-point variable for the average as it is likely to be two ints.
  avg = ((float)totalPoints/10);

  printf("\n\nPlayer %s's scoring average is %.1f.\n", name, avg);

  return 0;
}
