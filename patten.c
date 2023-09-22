

#include <stdio.h>
int main() {
   int n, i, j, t = 1;
   printf("Enter the number of rows: ");
   scanf("%d", &n);
       
       
   for (i = 1; i <=n; i++)
   {
     for(j=i;k<=i-1;k++)
       {
        printf("\t ");  
        }  
       
      for (j = i; j <=5; ++j)
      {
         printf("\t%d ", t);
         t++;
         }
}
      printf("\n");
   }
   return 0;
}

