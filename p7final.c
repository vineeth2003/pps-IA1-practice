#include <stdio.h>
typedef struct _complex
{
  float real;
  float imaginary;
}
complex;

complex input_complex()
{
  complex c;
  printf("enter the real part\n");
  scanf("%f", &c.real);
  printf("enter the imaginary part\n");
  scanf("%f", &c.imaginary);
  return c;
}
complex add(complex a, complex b)
{
  complex sum;
  sum.real = a.real + b.real;
  sum.imaginary = a.imaginary + b.imaginary;
}
void output(complex a, complex b, complex sum)
{
  printf("the sum of %0.2f + %0.2fi and %0.2f + %0.2fi is %0.2f + %0.2fi\n", a.real, b.real, a.imaginary, b.imaginary, sum.real, sum.imaginary);
}
int main()
{
  complex c1, c2, sum;
  c1 = input_complex();
  c2 = input_complex();
  sum = add(c1, c2);
  output(c1, c2, sum);
  return 0;
}