#include <stdio.h>

main()
{
  // two sets of equivalent variables, with one set
  // floating-point and the other integer.

  float a = 19.0, b = 5.0;
  float floatAnswer;

  int x = 19, y = 5;
  int intAnswer;

  // Using two floats creates a float answer.
  floatAnswer = a / b;
  printf("%.1f divided by %.1f equals %.1f\n", a, b, floatAnswer);

  floatAnswer = x / y; // Creates a float? answer, (%d?)
  printf("%d divided by %d equals %.1f\n", x, y, floatAnswer);
  
  // also 3, truncates because of type int
  intAnswer = a / b;
  printf("%.1f divided by %.1f equals %d\n", a, b, intAnswer);


  // modulo is modulo
  intAnswer = x % y;
  printf("%d modulus %d equals %d", x, y, intAnswer);

  return 0;
}
