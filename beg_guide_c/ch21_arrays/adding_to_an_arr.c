#include <stdio.h>


main()
{
  
  // here's an example of using scanf to add ints to an array for ages.
  int ages[3];
  for (int i = 0; i < 3; i++)
  {
    printf("What is the age of child #%d? ", i+1);
    scanf(" %d", &ages[i]); // gets age and stores it in the array index
  }

  for (int i = 0; i < 3; i++)
  {
    printf("Child #%d's age is %d ", i+1, ages[i]);
  }
  return 0;
}
