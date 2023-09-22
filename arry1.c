#include<stdio.h>

int main()
{
  int i,x[i],y[i];
  int x[]={11,22,33,44,55,66,77,88,99};
  int y[]={99,88,77,66,55,44,33,22,11};
  i=0;
  do
   {
    printf("%d\n",x[i]);
    printf("%d\n",y[i]);
    printf("%d\n",(x[i]+y[i]));
     i++;
    }
     while(i<=8);

}