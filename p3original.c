#include <stdio.h>
int input_n()
{
  int n1;
  printf("enter n numbers\n");
  scanf("%d", &n1);
  return n1;
}
int sum_n(int n)
{
  int sum1 = 0;
  for(int j=1; j<=n; j++)
  {
    
    sum1 = sum1 + j;

  }
  return sum1;
}
void output(int n, int sum)
{
  printf("sum of %d is %d\n", n, sum);
}
int main()
{
  int s;
  s = input_n();
  int b;
  b = sum_n(s);
  output(s,b);
}