#include<stdio.h>
#include<conio.h>
void main()
{
    int myuserid=9743,mypass=2939;
    
    int userid;
    int pass;
    
    printf("Enter userid: ");
    scanf("%d",&userid);
    
    printf("Enter pass: ");
    scanf("%d",&pass);
    
    if(userid == myuserid)
    {
        printf("\n userid is true");
    }
    if(pass == mypass)
    {
        printf("\n pass is true");
    }
    else
    {
        printf("Invalidation credit");
    }
    
    
    getch();
}