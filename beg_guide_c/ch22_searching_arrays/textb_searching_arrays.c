#include <stdio.h>

main()
{
  int ctr; // loop counter
  int idSearch; // customer to look for (the key)
  int found = 0;

  // definse 10 elements in two parallel arrays
  int custID[10] = {313, 453, 502, 101, 892,
                  475, 792, 912, 343, 633};
  float custBal[10] = {0.00, 45.43, 71.23, 301.56, 9.08,
                      192.41, 389.00, 229.67, 18.31, 59.54};

  printf("\n\n*** Customer Balance Lookup ***\n");
  printf("What customer number: ");
  scanf(" %d", &idSearch);

  /* Search to see that the customer ID exists in the array. */
  for (ctr=0; ctr<10; ctr++)
  {
    if (idSearch == custID[ctr])
    {
      found = 1;
      break;
    }
  }

  if (found)
  {
    if (custBal[ctr] > 100.00)
    {
      printf("\n** That customer's balance is $%.2f.\n", custBal[ctr]);
      printf(" No additional credit.\n");
    }
    else
    {
      printf("\n** The customer's credit is good!\n");
    }
    
  }
  else
  {
    printf("** Incorrect ID: %3d.\n", idSearch);
  }
  return 0;
}
