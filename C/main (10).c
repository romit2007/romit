#include<stdio.h>
#include<conio.h>
int main()
{
    int num;
    
    printf("\n press1 monday \n press2 tuesday \n press3 wednesday \n press4 for thursday \n press5 friday \n press6 saturday \n press7 sunday");
    printf("\n Enter num");
    scanf("%d",&num);
    
    switch(num)
    {
        case 1: printf("Monday");
        break;
        
        
        case 2: printf("tuesday");
        break;
        
        
        case 3: printf("wednesday");
        break;
        
        
        case 4: printf("thursday");
        break;
        
        
        case 5: printf("friday");
        break;
        
        
        case 6: printf("saturday");
        break;
        
         case 7: printf("sunday");
        break;
        
        default: printf("Choice isn't valid");
        break;
    }
    
    
    getch();
}

