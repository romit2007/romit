#include <stdio.h>
#include <stdio.h>

struct topstech
{
    char name[2000];
    char branch[5000];
    int rollno;
}s1[50];



int main()
{
    int i,n;
    
    printf("\n Enter number of student");
    scanf("%d",&n);
    
    for(i=0;i<n;i++)
    {
        printf("Enter name: ");
        scanf("%s",&s1[i].name);
        
        printf("Enter branch: ");
        scanf("%s",&s1[i].branch);
        
        printf("Enter roll num: ");
        scanf("%d",&s1[i].rollno);
    }
    
    for(i=0;i<n;i++)
    {
        printf("\n %s",s1[i].name);
        
        printf("\n %s",s1[i].branch);
        
        printf("\n %d",s1[i].rollno);
    }

    return 0;
}
