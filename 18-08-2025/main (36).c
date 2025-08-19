#include<stdio.h>
#include<conio.h>

struct student
{
    int id;
    char grade[10];
}s1;


int main()
{
    
    printf("Enter student detail");
    
    printf("\n Enter id");
    scanf("%d",&s1.id);
    
    printf("\n Enter grade");
    scanf("%s",&s1.grade);
    
    printf("\n student id");
    
    
    printf("\n student  is is: %d",s1.id);
    printf("\n student  grade is: %s",s1.grade);


    
}
