#include <stdio.h>

main()
{
  int custIDList[8] = {421, 346, 520, 140, 127, 687, 918, 822};
  float custBalances[8] = {0.00, 45.43, 71.23, 301.56, 9.08, 192.41, 380.00, 229.67};
  int currentID = 0;
  int element = -1;
  
  printf("Enter the customer ID: ");
  scanf(" %d", &currentID);
  printf("Entered ID: %d\n", currentID);

  for (int i = 0; i < 8; i++)
  {
    if (custIDList[i] == currentID)
    {
      element = i;
      printf("Customer: %d\n", custIDList[i]);
      printf("Balance: %.2f\n", custBalances[i]);
      
      /*
      if (custBalances[element] > 100.0)
        { printf("Balance too high.\n"); }
      else
        { printf("Balance OK\n"); }
      */

      // conditional in lieu of if/else
      custBalances[element] > 100.0 ? printf("Balance too high.\n") : printf("Balance OK\n");
    }

  }
  if (element == -1)
  printf("Customer %d not found!", currentID);
  
  return 0;
}
    
