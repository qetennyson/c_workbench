#include <stdio.h>
#define SALESTAX .07

main()
{
  // vars for the number of tired purchased, price per, pretax total
  // and total cost with tax

  int numTires;
  float tirePrice, beforeTax, netSales;

  /* Get the number of tires purchased and price per tired. */
  printf("How many tires did you purchase? ");
  scanf(" %d", &numTires);
  printf("What was the cost per tire (enter $XX.XX format)? ");
  
  scanf(" $%f", &tirePrice);

  /* compute price */
  beforeTax = tirePrice * numTires;
  netSales = beforeTax + (beforeTax * SALESTAX);

  printf("You spent $%.2f on your tires\n\n\n", netSales);

  return 0;
}
