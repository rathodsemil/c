#include<stdio.h>
#include<conio.h>
void main()
{
  
 int arry[5][5];
  int total=0,total2=0,total3=0;
   
   for(int i=0;i<=2;i++)
    {
     for(int j=0;j<=2;j++)
     {
      printf("enter arry[%d][%d]",i,j);
      scanf("%d",&arry[i][j]);
      }
     }

   for(int i=0;i<=2;i++)
    {
     for(int j=0;j<=2;j++)
     {
       if(i==j)
        {
         total=total+arry[i][j];  
         }
      
      else if(i<j)
        { 
       total2=total2+arry[i][j];
        }
       else if(i>j)
       {
        total3=total3+arry[i][j];
     	}
        printf("\t%d",arry[i][j]);
      
       }
     printf("\n");
   }
  printf("diagonal elementtotal:%d",total);
  printf("\nuppertriangle elementtotal2:%d",total2);
  printf("\nlowertriangle elementtotal3:%d",total3);
}
