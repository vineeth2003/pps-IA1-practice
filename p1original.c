#include <stdio.h>
void input_two_numbers(int*a, int*b)
{
  printf("enter two numbers\n");
  scanf("%d%d", a, b);
}
void find_sum(int a, int b, int*sum)
{
  *sum = a + b;
}
void output(int a, int b, int sum)
{
  printf("sum of %d + %d is %d\n", a, b, sum);
}
int main()
{
  int x, y, z;
  input_two_numbers(&x, &y);
  find_sum(x, y, &z);
  output(x, y, z);
  return 0;
}