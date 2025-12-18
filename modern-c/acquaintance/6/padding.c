#include <stdio.h>

struct a
  {
  unsigned char uc;
  unsigned u;
  unsigned long long ull;
  };

struct b
  {
  unsigned char uc;
  unsigned long long ull;
  unsigned u;
  };

struct c
  {
  unsigned u;
  unsigned char uc;
  unsigned long long ull;
  };

struct d
  {
  unsigned u;
  unsigned long long ull;
  unsigned uc;
  };

struct e
  {
  unsigned long long ull;
  unsigned char uc;
  unsigned u;
  };

struct f
  {
  unsigned long long ull;
  unsigned u;
  unsigned char uc;
  };

int main(void)
  {
  struct f s;
  unsigned char uc;
  unsigned u;
  unsigned long long ull;

  printf("%d\n", sizeof(s));
  printf("%d %d %d\n", sizeof(uc), sizeof(u), sizeof(ull));
  printf("%p %p\n", &uc, &u);
  printf("%p\n", &uc + 1);
  return 0;
  };
