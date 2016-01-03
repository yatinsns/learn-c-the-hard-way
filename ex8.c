#include <stdio.h>

int main(int agrc, char *argv[]) {
  int areas[] = {1, 2, 3, 4, 5};
  char name[] = "Zed";
  char full_name[] = {'Z', 'e', 'd', '\0'};

  printf("The size of an int: %ld\n", sizeof(int));
  printf("The size of areas: %ld\n", sizeof(areas));
  printf("The number of ints: %ld", sizeof(areas) / sizeof(int));

  printf("The first area is %d. The second area is %d", areas[0], areas[1]);

  printf("The size of char: %ld\n", sizeof(char));
  printf("The size of name char: %ld\n", sizeof(name));
  printf("The number of chars: %ld\n", sizeof(name) / sizeof(char));

  printf("The size of full_name (char[]): %ld\n", sizeof(full_name));
  printf("The number of chars: %ld\n", sizeof(full_name) / sizeof(char));

  printf("name=\"%s\" and full_name=\"%s\"\n", name, full_name);

  areas[0] = 100;
  name[0] = 'H';
  full_name[0] = 'A';

  areas[0] = name[0];

  return 0;
}
