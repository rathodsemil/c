#include<stdio.h>
int m,s,e,total;
float per;
void dispay()
{
    printf("maths\tscience\tenglish\ttotal\tper");
    printf("\n%d\t%d\t%d\t%d\t%2f",m,s,e,total,per);

    

}

void c()
{
  total=m+s+e;
  per=total/3;
  dispay();
}


void setdata()
{   
  printf("enter a maths mark:");
  scanf("%d",&m);
  printf("enter a science mark:");
  scanf("%d",&s);
  printf("enter a english mark:");
  scanf("%d",&e);
  c();
  }

  int main()
  {
    setdata();
  }

