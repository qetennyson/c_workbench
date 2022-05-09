#include <stdio.h>
#include <string.h>
#include <ctype.h>

main()
{
  int i;
  int hasUpper, hasLower, hasDigit;
  char user[25], password[25];

  // initialize all three test vars to False
  hasUpper = hasLower = hasDigit = 0;

  printf("Enter username: ");
  scanf(" %s", user);  // char array doesn't require &

  printf("Create password: ");
  scanf(" %s", password); 

  // loop tests each char to see if it is digit, upper, or lower
  for (i = 0; i < strlen(password); i++)
  {
    if (isdigit(password[i]))
    {
      hasDigit = 1;
      continue;
    }
    if (isupper(password[i]))
    {
      hasUpper = 1;
      continue;
    }
    if (islower(password[i]))
    {
      hasLower = 1;
      continue;
    }
  }
  /* The if portion will only execute if all three vars below are 1 
  and the vars will only equal 1 if there approp. chars were found */
  if ((hasDigit) && (hasUpper) && (hasLower))
  {
    printf("Excellent work, good password %s\n", user);
  }
  else
  {
    printf("Make a 'better' password %s", user);
  }
  return 0;
}

