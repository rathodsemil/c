#include<stdio.h>
#include<conio.h>
void main()
{ 
   
  char str1[20],str2[30];
  int i,k,j;
 printf("enter string:");
 scanf("%s",&str1);
 for(j=0;str1[j]!='\0';j++)
  k=j;
 for(i=0;i<j;i++)
  {
  str2[i]=str1[k--];
 
  }
str2[i]='\0';
printf("\n reverse string is:%s",str2);
}