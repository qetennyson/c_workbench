#include <stdio.h>

main()
{
  char topping[24];
  int slices;
  int month, day, year;
  float cost;

  // We ensure the user will include '$' to start with in the scanf
  printf("How much does a pizza cost?");
  printf("Enter as $xx.xx)\n");
  scanf(" $%f", &cost);

  // Strings do not need the address-of (&) operator because an array is a pointer variable.
  printf("Favorite pizza topping (one word only)?");
  scanf(" %s", topping);

  printf("How many slices of %s pizza", topping);
  printf(" can you eat in one sitting\n");
  scanf(" %d", &slices);

  printf("What is today's date (enter in MM/DD/YY format).\n");
  scanf(" %d/%d/%d", &month, &day, &year);

  printf("\n\nWhy not treat yourself to dinner on %d/%d/%d", month, day, year);
  printf("\nand have %d slices of %s pizza!\n", slices, topping);
  printf("It will only cost you $%.2f!\n\n\n", cost);

  return 0;
}


