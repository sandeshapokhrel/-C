/*create a menu driven program to perform following operation
  #add two numbers
  *subtract two numbers
  ?multiply two number
  !divide two number */
#include<stdio.h>
int main()
{
    char ch;
    printf("enter a character");
    scanf("%c",&ch);
    int a,b;
    printf("enter the value of a and b");
    scanf("%d%d",&a,&b);
    switch(ch)
  {
    case '#':
    printf("a+b= %d",a+b);
    break;
    case '*':
    printf("a-b= %d",a-b);
    break;
    case '?':
    printf("a*b= %d",a*b);
    break;
    case '!':
    printf("a/b= %d",a/b);
    break;
    default:
    printf("invalid");

  }
    getch();
}
