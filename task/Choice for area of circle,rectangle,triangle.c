#include<stdio.h>
#include<conio.h>
int main()
{
    int choice;
    float area, base, height, length, breadth, radius;
    
    
    printf("\n Area of Circle");
    printf("\n Area of Rectangle");
    printf("\n Area of  tringale");
    printf("\n Enter  Choice: ");
    scanf("%d",&choice);
    
    if(choice==1)
    {
        printf("Enter the base of triangle: ");
        scanf("%f",&base);
        printf("Enter the height of triangle: ");
        scanf("%f",&height);
        area=0.5*base*height;
        printf("Area of Triangle = %.2f\n", area);
    }
    else if(choice==2)
    {
        printf("Enter the length of Rectangle: ");
        scanf("%f",&length);
        printf("Enter the breadth of Rectangle: ");
        scanf("%f",&breadth);
        area=length*breadth;
        printf("Area of Rectangle = %.2f\n", area);
        
    }
    else if(choice==3)
    {
        printf("Enter radius of the circle: ");
        scanf("%f",&radius);
        area=3.14*radius*radius;
         printf("Area of circle = %.2f\n", area);
        
        
    }
    else
    {
        printf(" choice is Unvalied");
    }
    
    return 0;
}
