#include <stdio.h>
#include <string.h>

main()
{
  int i;
  char msg[25];

  printf("Type up to 25 charactes and then press Enter...\n");
  for (i = 0; i < 25; i++)
  {
    msg[i] = getchar(); // outputs a single character
    if (msg[i] == '\n')
    {
      i--;
      break;
    }
  }
  
  putchar('\n'); // one line break after the loop is done

  for (; i >=0; i--)
  {
    putchar(msg[i]);
  }

  putchar('\n');
  return 0;
}
