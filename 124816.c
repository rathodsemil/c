#include<stdio.h>

void num()
{
 int i,n;
 printf("enter avalue:");
 scanf("%d",&n);
 for(i=1;i<=n;i*=2)
   {  
     
    printf("\t%d",i);
        
   }
  

}
int main()
{

num();

return 0;
}