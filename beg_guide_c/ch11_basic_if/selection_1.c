// relational operators produce 1s and 0s in C, not True or False
#include <stdio.h>

main ()
{
  int a, b;
  a = (4 < 10); // true, 1
  b = (8 == 9); // false, 0
  printf("%d", a);
  printf("%d", b);
}
