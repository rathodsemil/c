#include<stdio.h>
int main()
{
  int i,n,event=0,odd=0,total=0;
  
  printf("enter a value:");
  scanf("%d",&n);
  int x[n];
    for(i=1;i<=n;i++)
    {
      printf("enter a value:");
      scanf("%d",&x[i]);
   
     }
   printf("\nposition \tvalue");
  

  for(i=1;i<=n;i++)
  { 
   printf("\n%d\t\t%d",i,x[i]);
    if(x[i]%2==0)
      {
       event=event+x[i];
       }
    if(x[i]%2==1)
      {
      odd=odd+x[i];
       } 
       total=event+odd; 
   }
printf("\n total of event no:%d",event);
printf("\n total of odd no:%d",odd);
printf("\n total of event+total no:%d",total);

}
