#include<stdio.h>

int main()
{
    int arr[10]={1,2,1,3,4,5,6,2,7};
     int i,j,x=6;
     
     for(i=0;i<9;i++)
     {
       if(x==arr[i])
       {
        printf("\n%d",i);

       }
      }
    return 0;
}