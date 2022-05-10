#include <stdio.h>
#include <stdlib.h>
#include <time.h>

main()
{
  
  int ctr, didSwap, temp, swaps;
  int nums[10];
  time_t t;

  srand(time(&t));
  
  for (ctr = 0; ctr < 10; ctr++)
  {
    nums[ctr] = (rand() % 99) + 1;
  }
  
  printf("Presort:\n");
  for (ctr=0; ctr<10; ctr++)
  {
    printf("%d\n", nums[ctr]);
  }

  do {
    
    didSwap = 0;
    swaps = 0;
    for (ctr = 0; ctr < 9; ctr++)
    {
      if (nums[ctr] > nums[ctr+1])
      {
        temp = nums[ctr];
        nums[ctr] = nums[ctr+1];
        nums[ctr+1] = temp;
        didSwap = 1;
        swaps++;
      }
    }
  } while (didSwap);
  
  
  printf("Postsort:\n");
  for (ctr=0; ctr<10; ctr++)
  {
    printf("%d\n", nums[ctr]);
  }
  return 0;
}
