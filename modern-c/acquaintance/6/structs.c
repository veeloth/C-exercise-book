#include <stdio.h>

struct birdStruct
  {
  char const* jay;
  char const* magpie;
  char const* raven;
  char const* chough;
  };

struct birdStruct const aName =
  {
  .chough = "Henry",
  .raven = "Lissy",
  .magpie = "Frau",
  .jay = "Joe",
  };

int main(void)
  {
  printf("%s", aName.jay);
  return 0;
  }
