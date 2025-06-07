#include<stdio.h>
#include<conio.h>
void main()
{
    char alphabets;
    
    printf("Enter alphabets: ");
     scanf("%c",&alphabets);
  
  if(alphabets=='A'||alphabets=='E'||alphabets=='I'||alphabets=='O'||alphabets=='U')
  {
      printf("vovel");
  }
  else
  {
      printf("consonant");
  }
    
    
    
    getch();
}