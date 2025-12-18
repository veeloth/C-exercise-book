#include <stdio.h>

void mkvla (char c)
  {
  char vstring[c];
  for (char i = c-1; i+1; --i)
    {
    vstring[i] = getchar();
    }
  for (char i = c-1; i+1; --i)
    {
    printf("\n%d: %c", i, vstring[i]);
    }
  }

int main ()
  {
  unsigned char c = getchar() - '0';
  mkvla(c);
  return 0;
  }
