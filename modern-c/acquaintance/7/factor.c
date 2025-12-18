#include <stdio.h>
#include <stdlib.h>

//computes all prime factor: because of this always going for the smallest factor first and all non prime numbers being bigger than their prime factors, it ends up spitting out primes only; //computes all factors, prime or not

unsigned int leastfactor(int n)
  {
  unsigned f;
  for (f = 2; n%f; ++f) {}
  return f;
  }

void printfactorsrec(unsigned n, unsigned lf)
// f stands for factor, lf for last factor, so if the last factor I got was 3 I don't retry with 2;
  {
  if (n==1) {return; printf("a");}
  unsigned f = lf;
  for (;n%f;++f) {}
  printf("%d ", f);
  printfactorsrec(n/f, f);
  }

void printfactors(unsigned n)
  {
  if(n==1) {printf("no factors for 1"); return;}
  unsigned f;
  for (f = 2; n%f; ++f) {}
  printf("%d ", f);
  printfactorsrec(n/f, f);
  }

int main(int argc, char* argv[argc+1])
  {
  if (argc==1)
    {
    printf("usage: factor <uint>");
    return 0;
    }
  char* end;
  unsigned n = strtol(argv[1], &end, 10);
  printfactors(n);
  return 0;
  }
