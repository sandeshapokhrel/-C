/*//WAP in c to find the greatest among two number using ternary.
#include<stdio.h>
 int main()
 {
     int a,b,c;
     printf("enter the value of a b and c");
     scanf("%d%d%d",&a,&b,&c);
     (a>b)?((a>c)?printf ("a"): printf("c")):((b>c)? printf("b"):printf("c"));
     return 0;
 } */

//WAP in c to find the greatest among two number using ternary.
#include<stdio.h>
 int main()
 {
     int a,b,c,result;
     printf("enter the value of a b and c");
     scanf("%d%d%d",&a,&b,&c);
     result=(a>b)?((a>c)?a:c):((b>c)? b:c);
     printf("the greatest among three is %d",result);

     return 0;
 }
