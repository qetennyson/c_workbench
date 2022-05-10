#include <stdio.h>

main()
{
  int i; // defines a non-array variable
  int i[25]; // an int array with max elements of 25
  char name[6] = "Italy"; // 5 letter string (char array) with room for null zero

  char name[80] = "Italy"; // larger than necessary, but OK

  int vals[5] = {10, 40, 70, 90, 120}; // int array built an element at a time.

  float money[10] = {6.23, 2.45, 8.01, 2.97, 6.41}; // float array built an element at a time with more room.
  double annualSal[6] = {43565.78, 75674.23, 90001.34,
                        10923.45, 39845.82}; // line breaks are ignored
  char grades[5] = {'A', 'B', 'C', 'D', 'F'}; // due to the lack of a null zero, this is not considered a string. 
  // it is an array of individual chars, and cannot be used with printf(), puts() or %s.

  char nonsense[7] = {'V', 'e', 'r', 'o', 'n', 'a', '\0'}; // indiv. characters that probably make more sense as a string.

  char italCity[7] = "Verona"; // room for null-zero!

  int nums[4] = {5, 4, 3, 0}; // that is NOT a null-zero, only strings have/need them.

  // always define subscripts unles you are defining the array when you initialize it, e.g.
  int ages[5] = {5, 27, 65, 40, 92}; // good
  int ages[]; // not good
  int ages[] = {5, 27, 65, 40, 92}; // OK

  // sizeof() returns the number of bytes reserved for an array.
  /* example:
  floats take 4 bytes
  you build an 8 element float array */
  float values[8] = {4.2, 3.1, 5.6, 7.2, 4.4, 1.9, 1.3, 8.0};
  
  // the size of this array is 8*4 == 32, not 8.

  // you can zero out all elements of an array:
  float values[8] = {0.0};

  // C automatically zeroes out remaining elements if you assign at least one element at initialization.
  return 0;
}
