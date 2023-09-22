#include<stdio.h>
#include<conio.h>
void main()
{ 
    char str[20];
    int  i,vowel,a=0,b=0;
    printf("Enter string:");
    scanf("%s",&str);
   
  for(i=0;str[i]!='\0';i++)
      {
     if (str[i]=='a'||str[i]=='e'||str[i]=='i'||str[i]=='o'||str[i]=='u'||str[i]=='A'||str[i]=='E'||str[i]=='I'||str[i]=='O'||str[i]=='U')
       {
         a++;
         }
    else
        {
         b++;
        }
   }
   printf("%d is a vowel.", a);
   printf("%d is a consonant.", b);
}







		