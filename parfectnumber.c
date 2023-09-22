#include<stdio.h>

void parfect()

{
    int a,b=0,n;
    printf("enter a number:");
    scanf("%d",&n);
    for(a=1;a<n;a++)
     {
        if(n%a==0)
        {
            b=b+a;
        }
    }
   if(b==n)
    {
        printf("%d is parfect number:",b);
    }
    else
    {
        printf("%d not is parfect number:",n);
        }

}
int main()
{
parfect();

}