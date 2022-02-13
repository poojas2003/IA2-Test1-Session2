#include<stdio.h>
int input_number()
{
  int a;
  printf("enter the number\n");
  scanf("%d",&a);
  return a;
}
int is_composite(int n)
{
  for(int i=2; i<=n/2; i++)
  {
    if (n%i==0)
    return 1;
  }
  return 0;
}
void output(int  n,int composite)
{
  if(composite)
  printf("%d is a composite number\n",n);
  else 
  printf("%d is not a composite number\n",n);
}
int main()
{
  int a,n;
  a=input_number();
  n=is_composite(a);
  output(a,n);
  return 0;
}