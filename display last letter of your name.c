#include<stdio.h>
int main()
{
  char name[10];
  printf("enter your name");
  scanf("%s",&name);
  printf("the last letter of your name is %c",name[7]);
  return 0;

}
