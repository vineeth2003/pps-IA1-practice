#include <stdio.h>
int cmp(int a, int b, int c)
{
  int largest = 0;
  if(a>b && a>c)
  largest = a;
  else if(b>a && b>c)
  largest = b;
  else if(c>a && c>b)
  largest = c;
}
int input()
{
  int a;
  printf("enter a number\n");
  scanf("%d", &a);
  return a;
}
void output(int l)
{
  printf("the largest of three numbers is %d\n", l);
}
int main()
{
  int x, y, z, l;
  x = input();
  y = input();
  z = input();
  l = cmp(x, y, z);
  output(l);
  return 0;
}