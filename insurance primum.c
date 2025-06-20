#include<stdio.h>
#include<conio.h>
int main()
{
   float salary,rate,primum;
   
   printf("Enter salary: ");
   scanf("%f",&salary);
   
   printf("Enter rate: ");
   scanf("%f",&rate);
   
   primum=(salary*rate)/100;
   
   printf("Insurance Primum is : $%.2f\n",primum);
   
   
   
   
   getch();
}