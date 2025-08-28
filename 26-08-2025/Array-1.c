#include<stdio.h>
#include<conio.h>
int main()
{
    int marks[5],i,total=0;
    float avg;

    for(i=1;i<=5;i++)
    {
        printf("\n Enter marks: ");
        scanf("%d",&marks[i]);
    }

    for(i=1;i<=5;i++)
    {
        total+=marks[i];
    }


     printf("\n Total Marks are: %d",total);
        
        avg = total/5;
    
    printf("\n Percentage is: %f",avg);

    return 0;
}
