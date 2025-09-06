#include<stdio.h>
#include<conio.h>

struct detail
{
     int id;
    char name[50];
    char surname[50];
    char address[50];
    float salary;
    
}d1;


int main()
{
    printf("Enter id: ");
    scanf("%d",&d1.id);
    
     printf("Enter Name: ");
    scanf("%s",&d1.name);
    
    printf("Enter Surname: ");
    scanf("%s",&d1.surname);
    
    printf("Enter Address: ");
    scanf("%s",&d1.address);
    
     printf("Enter salary: ");
    scanf("%f",&d1.salary); 
    
    
    printf("\n  Id  : %d ",d1.id);
    printf("\n name : %s",d1.name);
    printf("\n surname: %s",d1.surname);
    printf("\n address: %s",d1.address);
    printf("\n  Salary : %f ",d1.salary);

}