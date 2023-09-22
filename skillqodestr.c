#include<stdio.h>
#include<conio.h>
 void main()
{
  char str1[20],str2[30],str3[20];
  int i,k=0,j=0;
  printf("enter string:");
 scanf("%s",&str1);
 printf("enter string:");
 scanf("%s",&str2);
 
for(i=0;str1[i]!='\0';i++)
   {
        str3[i]=str1[i];
         k++;


    }
 `																																																																																																																																																																																																																																																				
for(i=0;str2[i]!='\0';i++)
   {
     str3[k]=str2[i];
    k++;
  
}
str3[k]='\0';
printf("\n string is:%s",str3);
}