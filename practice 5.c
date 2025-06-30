#include<stdio.h>
#include<conio.h>
void main()
{
    int myuserid=9743,mypass=8888;
    
    int userid;
    int pass;
    
    printf("Enter userid: ");
    scanf("%d",&userid);
    
    printf("Enter pass: ");
    scanf("%d",&pass);
    
    if(userid == myuserid && pass == mypass)
    {
        printf("login success");
    }
    else
    {
        printf("login failed");
    }
    
    
    getch();
}