#include <stdio.h>

main()
{
  
  // Set up variables, there will be 3 children with separate info.
  char firstInitial, middleInitial;
  int number_of_pencils;
  int number_of_notebooks;
  float pencils = 0.23;
  float notebooks = 2.89;
  float lunchbox = 4.99;

  // First Child Info
  firstInitial = 'J';
  middleInitial = 'R';

  number_of_pencils = 7;
  number_of_notebooks = 4;

  printf("%c%c needs %d pencils, %d notebooks, and 1 lunchbox\n", firstInitial, middleInitial, number_of_pencils, number_of_notebooks);
  printf("The total cost is $%.2f\n\n", number_of_pencils*pencils + number_of_notebooks*notebooks + lunchbox);

  // Second Child Info 
  firstInitial = 'A';
  middleInitial = 'J';

  number_of_pencils = 10;
  number_of_notebooks = 3;

  printf("%c%c needs %d pencils, %d notebooks, and 1 lunchbox\n", firstInitial, middleInitial, number_of_pencils, number_of_notebooks);
  printf("The total cost is $%.2f\n\n", number_of_pencils*pencils + number_of_notebooks*notebooks + lunchbox);

 // Third Child Info
  firstInitial = 'M';
  middleInitial = 'T';

  number_of_pencils = 9;
  number_of_notebooks = 2;

  printf("%c%c needs %d pencils, %d notebooks, and 1 lunchbox\n", firstInitial, middleInitial, number_of_pencils, number_of_notebooks);
  printf("The total cost is $%.2f\n\n", number_of_pencils*pencils + number_of_notebooks*notebooks + lunchbox);

  return 0;
}
