// 12S24010 - Artha Liebe Siregar
// 12S24036 - Josef Christian Marpaung 

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(int _argv, char **_argc) {
  char s[61];
  scanf("%60s", s);

  int len = strlen(s);
  for (int i = 0; i < len; i += 3) 
  {
    char temp[4];

    strncpy(temp, s + i, 3);

    temp[3] = '\0';

    int ascii = atoi(temp);

    printf("%c", (char)ascii);
  }
   
   printf("\n");


  return 0;
}
