#include<stdio.h>

void num()
{
 int i,n,total=0;
 printf("enter avalue:");
 scanf("%d",&n);
 for(i=1;i<=n;i++)
   {    
    if(i%2==0)
    {
        printf("\t%d",i*i);
    }
    else
    {
     printf("\t%d",i*i);
    }
     
    
        
   }
  

}
int main()
{

num();

return 0;
}