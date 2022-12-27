#include<stdio.h>
int main ()
{
   int a[2][2],i,j;
   int b[2][2];
   int c[2][2]={{ 0,0},{0,0}};
puts("enter matrix a");
   for(i=0;i<2;i++)
   { for (j=0;j<2;j++){
       scanf("%d",&a[i][j]);
   }
   }
   puts("enter matrix b");
    for(i=0;i<2;i++)
   { for (j=0;j<2;j++){

       scanf("%d",&b[i][j]);
   }
   }  for(i=0;i<2;i++)
   { for (j=0;j<2;j++){
       c[i][j]=a[i][j]+b[i][j];

   }
   }
   for(i=0;i<2;i++)
   { for (j=0;j<2;j++){

    printf("%d\t",c[i][j]);

   }
   printf("\n");
   }
   return 0;

}
