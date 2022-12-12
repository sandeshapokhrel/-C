//find the number greatest among a b and c sing nested if else.
#include<stdio.h>
int main()
{
    int a,b,c;
    printf("enter the value of a b and c");
    scanf("%d%d%d",&a,&b,&c);
    if(a>b)
    {
        if(a>c)
        {
            printf("the greatest among a b c is a %d",a);
        }else
        {
            printf("the greatest among a b c is c %d",c);
        }

    }
    else
    {
        if (b>c)
        {
            printf("the greatest among a b c is b %d",b);
        }
        else
        {
            printf("the greatest among a b c is c %d",c);
        }
    }
    return 0;

}
