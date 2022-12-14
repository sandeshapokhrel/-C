//sum of number upto nth term.
#include<stdio.h>
int main()
{
  int n,i,sum=0;
  printf("enter a number");
  scanf("%d",&n);
  for(int i=1; i<=n;i++)
  {   sum=sum+i;

  } puts("the sum of of number is :");
   printf("%d\n",sum);
  return 0;

}
