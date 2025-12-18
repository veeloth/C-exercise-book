#include <stdio.h>

typedef struct a a;
struct a
  {
  unsigned _BitInt(4) sta :4;
  unsigned _BitInt(4) end :4;
  };

int main (void)
  {
  a a;
  unsigned char new;
  printf("%p; %p", &a, &new);
  return 0;
  }
