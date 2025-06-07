#include<stdio.h>
#include<conio.h>
void main()
{
    int age;
    
    printf("Enter age: ");
    scanf("%d",&age);
    
    if(age<=12)
    {
        printf("children ticket price is :180 ");
    }
    else if(age<=50)
    {
        printf("adult person ticket price is : 270");
    }
    else 
    {
        printf("Senior citizen ticket price is:360");
    }
    
    
    
    
    getch();
}
