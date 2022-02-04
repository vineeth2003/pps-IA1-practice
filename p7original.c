#include <stdio.h>
 typedef struct _complex
{
  float real;
  float imaginary;
}
Complex;

Complex input_complex()
{
  Complex c;
  printf("enter the real part\n");
  scanf("%f", &c.real);
  printf("enter the imaginary part\n");
  scanf("%f", &c.imaginary);
  return c;
}

Complex add(Complex a, Complex b)
{
  Complex sum;
  sum.real = a.real + b.real;
  sum.imaginary = a.imaginary + b.imaginary;
  return sum;
}

void output(Complex a, Complex b, Complex sum)
{
  printf("the sum of %0.1f + %0.1fi and %0.1f + %0.1fi is %0.1f + %0.1fi\n", a.real, a.imaginary, b.real, b.imaginary, sum.real, sum.imaginary);
}

int main()
{
  Complex c1, c2, sum;
  c1 = input_complex();
  c2 = input_complex();
  sum = add(c1, c2);
  output(c1, c2, sum);
  return 0;
}