#include<stdio.h>
int main()
{

    int a[10]={1,2,3,4,5,6,7,8,9};
    for( int i=9;i<=0;i++)
    {
    if(i>=3)
    {
    a[i+3]=a[i];
    }
    /*else if(i>=5)
    {
        
    }*/
   }
   a[5]=1;
   a[3]=6;
   for(int i=0;i<=9;i++)
   {
    printf("%d\t",a[i]);
   }

    return 0;
}