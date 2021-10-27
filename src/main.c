#include <stdio.h>
#include "core/test.h"

int main(int argc, const char **argv) {
  printf("vscode-c-mingw-starter\n\n");

  printf("Command Line Arguments:\n");
  for (int i = 0; i < argc; ++i) {
    printf("%s\n", argv[i]);
  }

  testFunc();

  getchar();
  return 0;
}
