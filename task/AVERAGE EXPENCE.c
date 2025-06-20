#include<stdio.h>
#include<conio.h>
int main()
{
    int gst,it,electricity_bill,property_tax,sip,average,n,total;
    
    printf("Enter gst : ");
    scanf("%d",&gst);
    
    printf("Enter it : ");
    scanf("%d",&it);
    
    printf("Enter electricity_bill : ");
    scanf("%d",&electricity_bill);
    
    printf("Enter property_tax: ");
    scanf("%d",&property_tax);
    
    printf("Enter sip: ");
    scanf("%d",&sip);
    
    total=gst+it+electricity_bill+property_tax+sip;
    
     average=total/5;
   
   printf("\n total expence is : %d ",average);
   
   
    
    
    
    
    
    
    
    
    
    
    
    getch();
}