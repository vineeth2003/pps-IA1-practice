#include <stdio.h>
void input_two_strings(char a, char b)
{
  printf("enter a word\n");
  scanf("%s", &a);
  printf("enter a word\n");
  scanf("%s", &b);
}
int strcmp(char*a, char*b)
{
  int i=0, result;
  while(a[i]!='\0' && b[i]!='\0')
  {
    if(a[i]>b[i])
    {
      result = -1;
      break;
    }
    else if(b[i]>a[i])
    {
      result = 1;
      break;
    }
    else if(a[i]=b[i])
    {
      i++;
    }
  }

  if(a[i]=='\0')
  {
    result = 1;
  }
  if(b[i]=='\0')
  {
    result = -1;
  }
  if(a[i]=='\0' && b[i]=='\0')
  {
    result = 0;
  }
  return result;
}
void output(char*a, char*b, int result)
{
  if(result = -1)
  {
    printf("%s is greater than %s", a, b);
  }
  if(result = 1)
  {
    printf("%s is greater than %s", b, a);
  }
  if(result = 0)
  {
    printf("%s is equal to %s", a, b);
  }
}
int main()
{
  char a[20], b[20];
  int result;
  input_two_strings(*a,*b);
  result = strcmp(a, b);
  output(a, b, result);
}