
#include <stdio.h>

int main()
{
    int marks;
    
    printf("Enter marks");
    scanf("%d",&marks);
    
    if(marks>=40)
    {
        printf("pass");
                
    }
    else
    {
        printf("Fail");
    }

    return 0;
}