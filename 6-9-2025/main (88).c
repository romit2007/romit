#include<stdio.h>
#include<conio.h>

struct detail
{
    int id;
    float salary;
    
}d1;


int main()
{
    printf("Enter id: ");
    scanf("%d",&d1.id);
    
    printf("Enter salary: ");
    scanf("%f",&d1.salary); 
    
    
    printf("\n  Id  : %d ",d1.id);
    printf("\n  Salary : %f ",d1.salary);

}