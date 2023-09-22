#include<stdio.h>
#include<conio.h>
void main()
{
    int i,guj[3],maths[3],acc[3],eng[3],state[3],total=0;
    float per;
    char gread;
    
    for( i=0;i<=3;i++)
    {
        printf("enter a guj mark:");
        scanf("%d",&guj[i]);
    }
    printf("\n");
    for( i=0;i<=3;i++)
    {
        printf("enter a maths mark:");
        scanf("%d",&maths[i]);
    }
    printf("\n");
    for( i=0;i<=3;i++)
    {
        printf("enter a acc mark:");
        scanf("%d",&acc[i]);
    }
    printf("\n");
    for( i=0;i<=3;i++)
    {
        printf("enter a eng mark:");
        scanf("%d",&eng[i]);
    }
    printf("\n");
    for( i=0;i<=3;i++)
    {
        printf("enter a state mark:");
        scanf("%d",&state[i]);
    }
    printf("\n");

    for( i=0;i<=3;i++)
    {
        total=guj[i]+maths[i]+acc[i]+eng[i]+state[i];
        per=total/5;
    }
    printf("\nguj\tmaths\tacc\teng\tstate\ntotal\nper");
    printf("\n%d\t%d\t%d\t%d\t%d\n%d\n%2f",guj[i],maths[i],acc[i],eng[i],state[i],total,per);
}