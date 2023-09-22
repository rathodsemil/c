
#include<stdio.h>
struct gstbill
{
    int no,rate,qty,total,dis,amt,gst,netbill;
};

int main()
{
    struct gstbill bill[3];

    for(int i=0;i<3;i++)
    {
    printf("enter %d gstbill:\n ",i+1);
    printf("enter rate:");
    scanf("%d",&bill[i].rate);
     printf("enter qty:");
    scanf("%d",&bill[i].qty);

    bill[i].total=bill[i].rate*bill[i].qty;
    bill[i].dis=(bill[i].total*5)/100;
    bill[i].amt=bill[i].total-bill[i].dis;
    bill[i].gst=(bill[i].amt*18)/100;
    bill[i].netbill=bill[i].amt+bill[i].gst;

    }
printf("\n no.\trate\tqty\ttota\tdis\tamt\tgst\tnetbill\n");
 for (int i=0;i<3;i++)
      {
       printf("%d\t%d\t%d\t%d\t%d\t%d\t%d\t%d\n",i+1,bill[i].rate,bill[i].qty,bill[i].total,bill[i].dis,bill[i].amt,bill[i].gst,bill[i].netbill);

      }
    
}