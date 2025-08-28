#include<stdio.h>
#include<conio.h>
int main()
{
    int pass=8940;
    int id=9870;
    
    int mypass;
    int myid;
    
    printf("\n Enter mypass: ");
    scanf("%d",&mypass);
    
    printf("\n Enter myid: ");
    scanf("%d",&myid);
    
    if(pass==mypass && id==myid)
    {
        printf("\n Login success");
    }
    else
    {
        printf("\n Ivalid login");
    }
    
    
    
    
}