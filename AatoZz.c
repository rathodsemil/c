#include<stdio.h>

void num()
{
 int i;
 for(i=65;i<=90;i++)
   {
        printf("\n%c=",i);
        printf("%c",i+32);
   }
  

}
int main()
{

num();

return 0;
}