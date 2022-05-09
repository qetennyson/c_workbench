#include <stdio.h>

// OR has the lowest precedence, so be cautious when evaluating it with ANDs, ex:
if (age < 20 || sales < 1200 && hrsWorked > 15) {
  printf("The && is evaluated first, but this is not explicit!");
}

if ((age < 20) || ((sales < 1200) && (hrsWorked>15)))
{
  printf("This is better.");
}

// complex ifs can typically be broken down into nested tests if reasonable.
if ((grade > 93) && (classMissed <= 3)) && ((numActs >=3 || (sports >= 2)))
{
  printf("This is clear because of parens, but can be broken up.");
}

// separate lines
if ((grade > 93) && (classMissed <3)) &&
((numActs > 3) || (sports >= 2))
{
  printf("This works.");
}

// or separate the logic itself
if ((grade > 93) && (classMissed <=3))
{
  if ((numActs >= 3) || (sports >=2)) 
  {
    printf("Works the same.");
  }
}


