/*#include <stdio.h>
#define n 5
int arr[5], top = -1,b[5];

int display()
{
    for (int i = 0; i <= top; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

int insertend(int val)
{
    if (top >= n - 1)
    {
        printf("Stack is full.....\n");
    }
    else
    {
        top++;
        arr[top] = val;
    }
}


int deleteend()
{
    if (top == -1)
    {
        printf("Stack is empty.......\n");
    }
    else
    {
        top--;
    }
}

int insertfirst(int val)
{
    int j;

    if(top==-1)
    {
        top++;
        arr[top]=val;
    }
    else if(top>=4)
    {
        printf("Stack is already full");
    }
    else{
        for(int i=0;arr[i]!='\0';i++)
        {
            b[i]=arr[i];
        }
        j=0;
        arr[j]=val;
        for(int k=0;k<=top;k++)
        {
            j++;
            arr[j]=b[k];
        }
        top++;
    }
}


int deletefirst()
{
    if(top==-1)
    {
        printf("\nStack is already empty");
    }
    else{
        int j;
        for(int i=0;i<=top;i++)
        {
            b[i]=arr[i];
        }
        j=0;
        for(int k=1;k<=top;k++)
        {
            arr[j]=b[k];
            j++;
        }
        top--;
    }
}

int main()
{
    
    insertend(30);
    insertend(40);
    insertend(10);
    insertfirst(50);
    deletefirst();

    printf("\n\n");
    display(); 
    return 0;
}

*/
#include <stdio.h>
#define n 5
int arr[5], top = -1,b[5];

int display()
{
    for (int i = 0; i <= top; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

int insertend(int val)
{
    if (top >= n - 1)
    {
        printf("Stack is full.....\n");
    }
    else
    {
        top++;
        arr[top] = val;
    }
}


int deleteend()
{
    if (top == -1)
    {
        printf("Stack is empty.......\n");
    }
    else
    {
        top--;
    }
}

int insertfirst(int val)
{
    int j,k;
    if(top==-1)
    {
        top++;
        arr[top]=val;
    }
    else if(top>=4)
    {
        printf("\nStack is already full");
    }
    else{
        top++;
        k=top-1;

        for(int i=top;i>0;i--)
        {
            arr[i]=arr[k];
            k--;
        }
        arr[0]=val;
    }
    
}


int deletefirst()
{
    int j=1;

    if(top==-1)
    {
        printf("\nStack is already empty");
    }
    
    else{
       for(int i=0;i<=top;i++)
       {
            arr[i]=arr[j];
            j++;
       }
    }
    top--;
}

int main()
{
    
    insertend(30);
    insertend(40);
    insertfirst(50);
    insertend(10);
    deletefirst();

    printf("\n\n");
    display(); 
    return 0;
}