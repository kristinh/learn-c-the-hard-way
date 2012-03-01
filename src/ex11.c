#include <stdio.h>

int main(int argc, char *argv[])
{
  int i = 0;
  int num_provinces= 4;

  // go through each string in argv
  // skipping the first arg because
  while (i < num_provinces) {
    printf("arg %d: %s\n", i, argv[i]);
    i++;
  }

  // let's make our own array of string
  char *provinces[] = {
    "Ontario", "Quebec",
    "Manitoba", "Prince Edward Island"
  };

  for (i = 0; i < num_provinces; i++) {
    printf("province %d: %s\n", i, provinces[i]);
  }

  return 0;

}


