#include<stdio.h>

void num()
{
 int i,n,total=0;
 printf("enter avalue:");
 scanf("%d",&n);
 for(i=1;i<=n;i++)
   {    
       
        printf("\n%d",i*i);
        total=total+(i*i);
   }printf("total is:%d",total);
  

}
int main()
{

num();

return 0;
}