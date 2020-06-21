#include <stdio.h>
#include <unistd>

void doStuff(int n) {
  printf("Printing out parameter: %d\n",n);
}

int main() {
  int a = 5;
  doStuff(a);
  return 0;
}
