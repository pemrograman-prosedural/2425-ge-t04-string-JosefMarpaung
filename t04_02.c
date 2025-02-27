// 12S24010 - Artha Liebe Siregar
// 12S24036 - Josef Christian Marpaung

#include <stdio.h>
#include <string.h>

int main(int _argv, char **_argc) {
  char huruf[21];

  fgets(huruf, sizeof(huruf), stdin);
  
  huruf[strcspn(huruf, "\n")] = '\0';
  
  for (int i = 0; i < strlen(huruf); i++) {
      printf("%03d", huruf[i]);
  }
  
  printf("013\n");
return 0;
}