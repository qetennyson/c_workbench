#include <stdio.h>

// relation ? trueStatement : falseStatement;

(total <= 3850.0) ? (total *= 1.10): (total *= 1.05);

// is equivalent to:

if (total <= 3850.0)
  { total *= 1.10; }
else
  { total *= 1.05; }

// assignment can be refactored in this way.  the first ex. is extra
total *= (total <= 3850.0) ? (1.10): (1.05);

// the conditional can be used in places if/else cannot
printf("I ate %d pear%s\n", numPear, (numPear>1) ? ("s.") : ("."));
// well that's cool
