#include<stdio.h>
int input_array_size()
{
  int length;
  printf("enter the length of array\n");
  scanf("%d",&length);
  return length;
}
void input_array(int n,int a[n])
{
  printf("enter the values of an array\n");
  for(int i=0;i<n;i++)
  {
    scanf("%d",&a[i]);
  }
}
int sum_composite_numbers(int n,int a[n])
{
  int sum=0;
  for(int i=0;i<n/2;i++)
  {
    if(is_composite(a[i]))
    {
      sum +=a[i];
    }
  }
  return sum;
}
void out_put(int sum)
{
  printf("%d\n",sum);
}
int main()
{
  int length=input_array_size();
  int data[length];
  input_array(length,data);
  int res=sum_composite_numbers(length,data);
  out_put(res);
  return 0;
}