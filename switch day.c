#include<stdio.h>
#include<conio.h>
void main()
{
    int num;
    
    printf("\n press1 for monday \n press2 for tuesday \n press3 for wednesday \n press4 for thursday \n press5 for friday \n press6 for saturday \n press7 for sunday");
    printf("\n Enter number");
    scanf("%d",&num);
    
    switch(num)
    {
        case 1: printf("\n monday");
        break;
        
        case 2: printf("\n tuesday");
        break;
        
        case 3: printf("\n wednesday");
        break;
        
        case 4: printf("\n thursday");
        break;
        
        case 5: printf("\n friday");
        break;
        
        case 6: printf("\n saturday");
        break;
        
        case 7: printf("\n sunday");
        break;
        
        default: printf("\n number is invalid");
        break;
        
        
    }
}
