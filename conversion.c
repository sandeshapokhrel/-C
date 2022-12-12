//convert 5xrooty^2+5
#include<stdio.h>
#include<math.h>
int main()
{
    float y,x,result;
    printf("enter the value of y and x");
    scanf("%f%f",&y,&x);
    result=(5*x)*sqrt(y*y+5) ;
    printf("the answer is %f",result);
    return 0;
}

