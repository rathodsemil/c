#include<stdio.h>
#include<conio.h>
void main()
{
  
  arry[5][5];
   
   for(int i=0;i<=5;i++)
    {
     for(int j=0;j<=5;j++)
     {
      printf("enter arry[%d][%d]",i,j);
      scanf("%d",&arry[i][j]);
      }
   }

   for(int i=0;i<=5;i++)
    {
     for(int j=0;j<=5;j++)
     {
      
      printf("%d",arry[i][j]);
      }
   
    }
 printf("\n");
}