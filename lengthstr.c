//length counting

#include<stdio.h>
#include<conio.h>
 void main()
{
  char str[20];
  printf("enter string:");
 scanf("%s",&str);
 int i=0;
while(str[i]!='\0')
  {
   i++;
   
}
printf("\n length is:%d",i);
}