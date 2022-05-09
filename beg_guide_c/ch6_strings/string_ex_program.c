#include <stdio.h>
#include <string.h>

main()
{

  char Kid1[12];
  char Kid2[] = "Maddie";
  char Kid3[7] = "Andrew";
  
  char Hero1[7] = "Batman"; // 7 characters long with null 0.
  char Hero2[34] = "Spiderman";
  char Hero3[25];

  Kid1[0] = 'J';
  Kid1[1] = 'i';
  Kid1[2] = 'm';
  Kid1[3] = '\0';
  strcpy(Hero3, "The Incredible Hulk");

  printf("%s\'s favorite hero is %s. \n", Kid1, Hero1);
  printf("%s\'s favorite hero is %s. \n", Kid2, Hero2);
  printf("%s\'s favorite hero is %s. \n", Kid3, Hero3);

  return 0;
}
 
 
