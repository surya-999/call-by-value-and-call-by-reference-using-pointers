#include <stdio.h>
void add10(int *);
int main(void) 
{ 
  int num = 10;
  printf("Value of num before function call: %d\n", num);
  add10(&num);
  printf("Value of num after function call: %d\n", num);
  return 0;
}
void add10(int *n) 
{
  *n = *n + 10;
  printf("Inside add10(): Value %d\n", *n);
}
