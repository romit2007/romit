#include<stdio.h>

void inputstudentData(int n,char names[][50],int marks[][3])
{
    for(int i=0;i<n;i++)
    {
        printf("\n Enter detail of students %d: ",i+1);
        printf("name: ");
        scanf("%s",&names[i]);
        
        printf("Enter marks 3 subject: ");
        for (int j = 0; j < 3; j++) 
        {
            scanf("%d",&marks[i][j]);
        }
    }
}

void calculateTotalAverage(int n, int marks[][3], int total[], float average[]) 
{
    for(int i=0;i<n;i++)
    {
        total[i]=0;
        for(int j=0;j<n;j++)
        {
            total[i]+=marks[i][j];
        }
         average[i] = total[i] / 3.0;
    }
}

void displayReport(int n, char names[][50], int total[], float average[]) 
{
    printf("\n--- Student Report ---\n");

    printf("Name\t\tTotal\tAverage\tResult\n");

    for (int i = 0; i < n; i++) 
     {
        printf("%s\t\t%d\t%.2f\t%s\n", names[i], total[i], average[i],
              average[i] >= 40 ? "Pass" : "Fail");
    }
}

void findstats(int n, char names[][50], float average[]) 
{
    
    int topindex=0,lowindex=0;
    int passcount=0,failcount=0;
    
       for (int i = 0; i < n; i++) 
       {
        if (average[i] > average[topindex]) 
         {
            topindex = i;
        }
        if (average[i] < average[lowindex])
        {
            lowindex = i;
        }

        if (average[i] >= 40)
            passcount++;
        else
            failcount++;
    }

      printf("\nTopper: %s (%.2f)\n", names[topindex], average[topindex]);
    printf("Lowest Average: %s (%.2f)\n", names[lowindex], average[lowindex]);
    printf("Passed: %d\n", passcount);
    printf("Failed: %d\n", failcount);
}
    
int main()
{
    int n;
    
     printf("Enter number of students: ");
    scanf("%d", &n);

    char names[100][50];
    int marks[100][3];
    int total[100];
    float average[100];

    inputstudentData(n, names, marks);
    calculateTotalAverage(n, marks, total, average);
    displayReport(n, names, total, average);
    findstats(n, names, average);

    return 0;
}

