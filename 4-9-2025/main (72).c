#include<stdio.h>
#include<conio.h>

struct detail
{
    int id;
    double salary;
}d1;


int main()
{
    
    printf("Enter id: ");
    scanf("%d",&d1.id);
    
    
    printf("Enter salary: ");
    scanf("%lf",&d1.salary);
    
    printf("\n id : %d",d1.id);
     printf("\n salary : %lf",d1.salary);
    
    
    


    return 0;
}