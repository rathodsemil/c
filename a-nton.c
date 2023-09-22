#include<stdio.h>

void num()
{
 int i,n;
 printf("enter a value:");
 scanf("%d",&n);
 
 for(i=-n;i<=n;i++)

   {
        printf("\n%d",i);
   }
  

}
int main()
{

num();

return 0;
} 