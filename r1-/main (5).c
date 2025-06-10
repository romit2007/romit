#include<stdio.h>
#include<conio.h>
int main()
{
 int num;
    
    printf("\n select your language \n press1 for english \n press2 for hindi \n press3 for german");
      printf("\n enter num");
    scanf("%d",&num);
    
    switch(num)
    {
        case 1 : printf("\n your language is english");
        break;
        
        case 2: printf("\n your language is hindi");
        break;
        
        case 3: printf("\n your language is german");
        break;
        
        default : printf("\n your number is not valied");
        break;
        
        
    }
    
    
    getch();
}
