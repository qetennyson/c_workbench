// Pointer variables hold addresses of other variables.
// & address-of - gets the address of a variable.
// * indirection - in functions, declares the parmater is a pointer to an object or function
// * dereferences - within functions, dereferences a pointer, and reads its value.


// A HANDY ILLUSTRATION IS ON PG. 224 OF BEGINNERS
#include <stdio.h>

main()
{
  int age = 19; // stores 19 in age
  int * pAge = &age; // "links up the pointer"
  
  // function example
  void swap(int *pa, int *pb) {
    int t = *pa;
    *pa = *pb;
    *pb = t;
    return;
  }
  return 0;
}
