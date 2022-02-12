#include<stdio.h>
int input_side()
{
  int a;
  printf("enter the number\n");
  scanf("%d",&a);
  return a;
}
int check_scalene(int a,int b,int c)
 {
   if(a!=b && a!=c)
   printf("the given triangle is scalene\n");
   else if(b!=c && b!=a)
   printf("the given triangle is scalene\n");
   else if(c!=a && c!=b)
   printf("the given triangle is scalene\n");
 } 
  void output(int a,int b,int c, int isscalene)
  {
    printf("%d!=%d!=%d:%d\n",a,b,c,isscalene);
  }
int main()
{
  int a,b,c,scalene;
  a=input_side();
  b=input_side();
  c=input_side();
  check_scalene(a,b,c);
  output(a,b,c,scalene);
  return 0;
}