#include<stdio.h>
#include<conio.h>
void main()
{
 int n,i,a;
printf("enter value");
 scanf("%d",&n);
 for(i=1;i<=n;i++)
  {
    if(n%i==0)
    {
     a++;
     }
  }
if(a<=2)
   {
      printf("prime no");
    }
  else
   {
    printf("!prime no");
    }
getch();

}