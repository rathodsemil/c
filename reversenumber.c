#include<stdio.h>
int reverse()
{
 int n,r;
 printf("enter number:");
 scanf("%d",&n);
 while(n>0)
 {

    r=n%10;
    printf("%d",r);
    n=n/10;
 }

}
int main()
{
    reverse();
}