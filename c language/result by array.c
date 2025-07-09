#include<stdio.h>
#include<conio.h>
void main()
{
    int marks[7];
    int i,sum=0;
    char subjects[100];
    float avg;
    
    for(i=0;i<7;i++)
    {
        printf("Enter name of subjects");
        scanf("%s",&subjects[i]);
    }
    
    for(i=0;i<7;i++)
    {
        printf("\n Enter marks");
        scanf("%d",&marks[i]);
    }
    
    for(i=0;i<7;i++)
    {
          sum+=marks[i];
     
    }
    avg=sum/7;
    printf("\n Your Percentage is %f",avg); 
    
    
    getch();
}