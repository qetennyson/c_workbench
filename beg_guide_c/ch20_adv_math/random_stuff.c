#include <stdio.h>
#include <math.h>
#include <stdlib.h>

// rand() returns a random value btwn 0 - 32767
// to narrow the randomness, we use %

dice = (rand() % 5) + 1; /* from 1 to 6, e.g. (0 thru 5) + 1 */

// for truly random values, you need a seed
// srand() seeds the random value
// srand() needs a random value every time the code runs
// a way to generate that is to use the exact time of day as the argument
// send the time's address to the srand() function


