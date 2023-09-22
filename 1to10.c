#include<stdio.h>

void num()
{
 int i,total=0;
 for(i=1;i<=10;i++)
   {    
       total=total+i;
        printf("\n%d",i);
   }printf("total is:%d",total);
  

}
int main()
{

num();

return 0;
}