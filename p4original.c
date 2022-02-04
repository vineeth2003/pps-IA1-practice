#include <stdio.h>
int input_array_size()
{
  int n1;
  printf("enter the size of the array\n");
  scanf("%d", &n1);
  return n1;
}
void input_array(int n, int a[n])
{
  int i, sum = 0;
  for(int i=0; i<n; i++){
    printf("enter the element no %d of the array\n", i);
    scanf("%d", &a[i]);
  }
}
int sum_n_arrays(int n, int a[n])
{
  int i, sum = 0;
  for(int i=0; i<n; i++)
  {

    sum = sum + a[i];

  }
  return sum;
}
void out_put(int n, int a[n], int sum)
{
  int i;
  for(int i=0; i<n; i++)
  {
    printf("%d", i);
  }
  printf("%d is %d", a[n-1], sum);
}
int main()
{
  int i, n, sum, a[i];
  n = input_array_size();
  input_array_size(n,a);
  sum_n_arrays(n,a);
  out_put(n, a, sum);
}