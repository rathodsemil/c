
//popstack.c

#include<stdio.h>
#define n 5
int a[n],top=-1;

 int display()
 {
    for(int i=0;i<=top;i++)
    {
    printf("\t%d",a[i]);
    }
  printf("\n");
 }

 int deleteend()
 {
    if(top==-1)
    {
        printf("stack  is empty.....\n");
    }
    else
    {
      --top;
    }
 }
 int main()
 { 
    deleteend(20);
    deleteend(30);
    deleteend(40);
    deleteend(50);
    deleteend(60);
    deleteend();
    deleteend();
    display();
      return 0;
 }
