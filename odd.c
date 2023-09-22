 #include<stdio.h>

void num()
{
 int i,n;
 printf("enter a value:");
 scanf("%d",&n);
 for(i=1;i<=n;i+=2)

   {
        printf("\n%d",i);
   }
  

}
int main()
{

num();

return 0;
}