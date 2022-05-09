#include <stdio.h>

main()
{
  int outer, inner;

  for (outer = 1; outer <= 3; outer++)
  {
    for (inner = 1; inner <= 5; inner++)
    {
      printf("%d ", inner);
    }
    printf("\n");
  }
  return 0;
}

