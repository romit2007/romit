#include<stdio.h>
#include<conio.h>
void main()
{
   
   int phy,che,maths,eng,com,average,total;
   
   printf("\n Name: Romit ");
   
   printf("\n Enter physics marks: ");
   scanf("%d",&phy);
   
   printf("\n Enter chemistry marks: ");
   scanf("%d",&che);
   
   printf("\n Enter mathematics marks: ");
   scanf("%d",&maths);
   
   printf("\n Enter English marks: ");
   scanf("%d",&eng);
   
   printf("\n Enter Computer marks: ");
   scanf("%d",&com);
   
   total=phy+che+maths+eng+com;
   average=total/5;
   
   printf("\n percentage is : %d ",average);
   
   
   
   
   
   
   
   
   
   
   
   
   
   getch();
}