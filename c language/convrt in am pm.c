#include<stdio.h>
#include<conio.h>
int main()
{
    
   int hour,min;
   
   printf("Enter time in 24 hour format (HH:PM): ");
   scanf("%d %d",&hour,&min);
   
   if(hour<0||hour>23||min<0||min>59)
   {
       if(hour<12)
       {
           printf("period,am");
       }
       else
       {
           printf("period,pm");
       }
   }
   else
   {
       printf("Invalid timeinput");
   }
   
       
   
   
   
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    getch();
}
