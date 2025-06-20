#include<stdio.h>
#include<conio.h>
int main()
{
   char alphabet;
   
   printf("Enter an alphabet(A-Z): ");
   scanf("%c",&alphabet);
   
   char ascii_value = (char) alphabet;
   
    printf("The character for Alphabet %c is '%d'\n", ascii_value, alphabet);
   
   
   getch();
}