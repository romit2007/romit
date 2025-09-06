#include<stdio.h>
#include<conio.h>
#include<string.h>

int main()
{
    char a[]="mango";
    char b[50];
    
    do
    {
        printf("Enter fruit name: ");
        scanf("%s",&b);
    }
    while(strcmp(a,b)!=0);
    
    printf("\n Answer is correct");
    
    
    return 0;
}