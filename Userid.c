#include<stdio.h>
#include<conio.h>
void main()
{
    int myuserid=1112,mypass=1234;
    
    int userid;
    int pass;
    
    printf("Enter user id : ");
    scanf("%d",&userid);
    
    printf("Enter user password: ");
    scanf("%d",&pass);
    
    
    if(userid == myuserid && pass == mypass)
    {
        printf("Login success");
    }
    {
        printf("Invalid Credentials");
    }






    getch();
}
    
