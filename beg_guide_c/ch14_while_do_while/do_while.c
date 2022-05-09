#include <stdio.h>

// do while is only used when the code block must be executed at least once.

main()
{
  float num1, num2, result;
  char choice;

  do {
    printf("Enter your first num to multiply: ");
    scanf(" %f", &num1);

    printf("Enter the second num: ");
    scanf(" %f", &num2);

    result = num1 * num2;
    printf("%.2f times %.2f equals %.2f\n\n", 
      num1, num2, result);

    printf("Do you want to enter another pair of numbers? ");
    printf("(Y/N): ");
    scanf(" %c", &choice);
    // if the user enters lower n, this if statement will convert to 'N'
    if (choice == 'n')
    {
      choice = 'N';
    }

  }
  while (choice != 'N');
  return 0;
}
