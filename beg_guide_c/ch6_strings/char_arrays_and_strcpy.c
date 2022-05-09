/* You can make the char array larger than the expected length for padding, or you can declare the char array so that it can only hold a maximum length equal to the length of the data at declaration */

#include <stdio.h>
#include <string.h> //required for strcpy()

main()
{

  char month[] = "January"; // max len is now == len. of January
  char month_b[25] = "January"; // substantial padding (suboptimal if only storing months, surely)

  /* You can use strcpy() to move a new string into an existing char array, 
  but you cannot assign something new directly */

  // month = "April"; illegal manuever!

  strcpy(month, "April"); // all good
  
  return 0;
}
