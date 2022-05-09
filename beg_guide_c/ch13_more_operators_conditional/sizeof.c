#include <stdio.h>

main()
{
// sizeof() returns the number of memory locations a type takes.
// sizeof(data) return the number of memory locations a specific thing takes.

  int is = sizeof(int);
  int fs = sizeof(float);

// or

  char name[] = "Ruth Claire";
  int i = 7;
  printf("The size of i is %d.\n", sizeof(i));
  printf("The size of name is %d.\n", sizeof(name));

  return 0;
} 
