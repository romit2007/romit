#include<stdio.h>
#include<conio.h>
int main()
{
   int ascii_value;
   
   printf("Enter an ascii_value(0-127): ");
   scanf("%d",&ascii_value);
   
   char character = (char) ascii_value;
   
    printf("The character for ASCII value %d is '%c'\n", ascii_value, character);
   
   
   getch();
}