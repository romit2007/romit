#include<stdio.h>
#include<conio.h>
int main()
{
    int choice;
    float area,base,height,radious,length,width;
    

    
    printf("\n press1 for area of circle \n press2 for area of triangle \n press3 for rectangle");
    printf("\n Enter choice: ");
    scanf("%d",&choice);
    
    if(choice==1)
    {
        
        printf("Enter radious: ");
        scanf("%f",&radious);
        area=3.14*radious*radious;
         printf("Area of circle = %.2f\n", area);
        
    }
    else if(choice==2)
    {
        printf("Enter base: ");
        scanf("%f",&base);
        printf("Enter height: ");
        scanf("%f",&height);
        area=0.5*base*height;
         printf("Area of triangle = %.2f\n", area);
    }
    else if(choice==2)
    {
         printf("Enter length: ");
        scanf("%f",&length);
        printf("Enter width: ");
        scanf("%f",&width);
        area=length*width;
         printf("Area of rectangle = %.2f\n", area);
    }
    else
    {
        printf("Choice isn't valid");
    }
    
    return 0;
}
 