//WAP in c to swap two integer values using only two variables.
#include<stdio.h>
int main ()
{
    int a, b ;
    printf("enter the value of a and b");
    scanf("%d%d",&a,&b);
    a=a+b;
    b=a-b;
    a=a-b;
    printf("after swaping a and b %d%d",a,b);
    return 0;

}
