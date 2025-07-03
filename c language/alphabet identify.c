#include<stdio.h>
#include<conio.h>
void main()
{
    char alphabet;
    
    printf("Enter alphabets: ");
    scanf("%c",&alphabet);
    
    if(alphabet=='A'||alphabet=='E'||alphabet=='I'||alphabet=='O'||alphabet=='U')
    {
        printf("vovel");
    }
    else
    {
        printf("consonant");
    }
    
    getch();
}
    
     
    