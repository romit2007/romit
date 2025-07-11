#include<stdio.h>
#include<conio.h>
void main()
{
    float p,r,t;
    float ans;
    
    printf("Enter p: ");
    scanf("%f",&p);
    printf("Enter r: ");
    scanf("%f",&r);
     printf("Enter t: ");
    scanf("%f",&t);
    ans=p*r*t/100;
    printf("simple interest is %f",ans);
    
}