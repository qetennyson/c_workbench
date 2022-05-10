#include <stdio.h>
#include <stdlib.h>
#include <time.h>

main()
{
  int ctr, inner, outer, didSwap, temp;
  int nums[10];
  time_t t;

  // remember to create the random seed so numbers are new
  srand(time(&t));

  // fill array with random nums
  for (ctr = 0; ctr < 10; ctr++)
  {
    nums[ctr] = (rand() % 99) + 1;
  }

  // now list array
  puts("\nHere is the list before the sort:");
  for (ctr = 0; ctr< 10; ctr++)
  {
    printf("%d\n", nums[ctr]);
  }

  // bubble sort!
  // the outer loop causes the inner loop to run several times for each item in the list.
  for (outer = 0; outer < 10; outer++) // why 9? (1 less time than length of array?)
  {
    didSwap = 0; // a flag for whether or not a swap has occurred.  Will be set to 1 while list is not ordered
    for (inner = outer; inner < 10; inner++)
    {
      if (nums[inner] < nums[outer])
      {
        printf("Hit\n");
        temp = nums[inner]; // assign the smaller number to temp.
        nums[inner] = nums[outer]; // put the larger number where the lower was before
        nums[outer] = temp; // move the smaller number into the index where the larger number was.
        didSwap = 1; // activate the flag
      }
    }
    if (didSwap == 0)
    {
      break; // if the process above is bypassed, that means the array is sorted.
    }
  }

  // show array after sorting
  printf("\nafter sort:\n");
  for (ctr=0; ctr<10; ctr++)
  {
    printf("%d\n", nums[ctr]);
  }
  return 0;
}

