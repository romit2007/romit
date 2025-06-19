#include <stdio.h>
#include <conio.h>
int main()
{
    
    int num;
    
    printf("\n Select your day \n press1 for sunday \n press2 for monday \n press3 for tuesday \n press4 for wednesday \n press5 for thursday \n press6 for friday \n press7 for sunday");
     printf("\n Enter Number");
    scanf("%d",&num);
      
      switch(num)
      {
          case 1: printf("\n sunday");
          break;
          
          case 2: printf("\n monday");
          break;
          
          case 3: printf("\n tuesday");
          break;
          
          case 4: printf("\n wednesday");
          break;
          
          case 5: printf("\n thursday");
          break;
          
          case 6: printf("\n friday");
          break;
          
          case 7: printf("\n saturday");
          break;
          
          default : printf("\n your number is not valid");
          break;
          
      }
  
  return 0;
}

    
