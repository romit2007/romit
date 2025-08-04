#include<stdio.h>
#include<conio.h>
int main()
{
    char ch[]="mango";
    char ch2[50];
    
    do
    
    {
        printf("Favrouite fruit");
        scanf("%s",&ch2);
    }
    while(strcmp (ch,ch2)!=0);
    
    printf("Answer correct");
}