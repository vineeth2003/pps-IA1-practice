#include <stdio.h>
float input()
{
  float a;
  printf("enter a number\n");
  scanf("%f", &a);
  return a;
}
float my_sqrt(float n)
{
  float x = n;
  float y = 1;
  float e = 0.000001;
  while(x-y>e)
  {
    x = (x + y)/2;
    y = n/x;
  }
  return x;
}
void output(float n, float sres)
{
  printf("square root of given input %0.2f is  %0.2f\n", n, sres);
}
int main()
{
  float n, sres;
  n = input();
  sres = my_sqrt(n);
  output(n, sres);
  return 0;
}