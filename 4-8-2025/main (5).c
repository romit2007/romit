
#include <stdio.h>

int main()
{
    int marks;
    
    printf("Enter marks");
    scanf("%d",&marks);
    
    if(marks>=75)
    {
        printf("A");
    }
    else if(marks>=60)
    {
        printf("B");
    }
    else if(marks>=45)
    {
        printf("C");
    }
    else if(marks>=33)
    {
        printf("D");
    }
    else
    {
        printf("Fail");
    }

    return 0;
}