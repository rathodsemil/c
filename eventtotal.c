#include<stdio.h>

void num()
{
 int i,n,total=0;
 printf("enter a value:");
 scanf("%d",&n);

 for(i=2;i<=n;i+=2)
   {    
       total=total+i;
        printf("\n%d",i);
        
   }
   printf("total is:%d",total);
  

}
int main()
{

num();

return 0;
}