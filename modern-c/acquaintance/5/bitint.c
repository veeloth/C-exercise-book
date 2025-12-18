#include <stdio.h>
#include <inttypes.h>

void genset ()
  {
  unsigned _BitInt(7) set = 119;
  printf("set is %07b\naddr is %p\n", set, &set);
  unsigned _BitInt(1) st = 1;
  printf("set is %01b\naddr is %p\n", st, &st);
  unsigned _BitInt(1) seet = 1;
  printf("set is %01b\naddr is %p", seet, &seet);
  }

int main ()
  {
  unsigned _BitInt(5) bist = 15wbu;
  printf("bits is %d", bist);
  char in = getchar();
  genset();
  return 0;
  }
