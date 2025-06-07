#include<stdio.h>
#include<conio.h>
void main()
{
    int age;
    
    printf("Enter age : ");
    scanf("%d",&age);
    
    if(age>=18)
    {
        printf("Eligibale to vate");
    }
    else
    {
        printf("not Eligibale to vote ");
    }
    
    
    
    
    getch();
}