#include <stdio.h>
#include <string.h>
#include <time.h>
#include <ctype.h>
#include <stdlib.h>

main()
{
  
  int dice1, dice2;
  int total1, total2;
  time_t t; // time tracker
  char ans;

  // ensuring each random number generate is different by getting a 
  // seed from the time stamp (weird)
  srand(time(&t));

  dice1 = (rand() % 5) + 1;
  dice2 = (rand() % 5) + 1;
  total1 = dice1 + dice2;
  printf("First roll of dice was %d and %d, ", dice1, dice2);
  printf("for a total of %d.\n\n\n", total1);

  do {
    puts("Do you think the next roll wil be ");
    puts("(H)igher, (L)ower, or (S)ame?\n");
    puts("Enter H, L, or S to reflect your guess.");

    scanf(" %c", &ans);
    ans = toupper(ans);
    } while ((ans != 'H') && (ans != 'L') && (ans != 'S'));

    // roll dice second time
    dice1 = (rand() % 5) + 1;
    dice2 = (rand() % 5) + 1;
    total2 = dice1 + dice2;

    // why is this not in a loop?

    printf("\nThe second roll was %d and %d, ", dice1, dice2);
    printf("for a total of %d.\n\n", total2);

    // compare
    if (ans == 'L')
    {
      if (total2 < total1)
      {
          printf("Yay, you were right, %d is lower than %d\n", total2, total1);
      }
      else
      {
        printf("Nope, %d is not lower than %d\n", total2, total1);
        
      }
    }
    else if (ans == 'H')
    {
      if (total2 > total1)
      {
        printf("Yay, you were right, %d is higher than %d\n", total2, total1);
      }
      else
      {
        printf("Oof, %d is not lower than %d\n", total2, total1);
      }
    }
    else if (ans == 'S')
    {
      if (total2 == total1)
      {
        printf("Wow, impressive. %d is equal to %d\n", total2, total1);
      }
      else
      {
        printf("An unlikely outcome == a likely missed guess.\n");
      }
    }
  return 0;
} 
