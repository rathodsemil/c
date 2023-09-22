#include<stdio.h>

void dispay(int total,int m,int s,int e)
{ 
 
float per;
per=total/3;
printf("maths\tscience\tenglish\ttotal\tper");
printf("\n%d\t%d\t%d\t%d\t%2f",m,s,e,total,per);

}

void c(int m,int s,int e)
{   
 int total;
 float per;
 total=m+s+e;
 per=total/3;
  dispay(total,m,s,e);
}


void setdata()
{  int m,s,e,total; 
    
  printf("enter a maths mark:");
  scanf("%d",&m);
  printf("enter a science mark:");
  scanf("%d",&s);
  printf("enter a english mark:");
  scanf("%d",&e);
  c(m,s,e);
  }

  int main()
  { 
    int m,s,e,total;
    float per;
    setdata();
    
  }
  