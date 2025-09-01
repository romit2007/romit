#include<stdio.h>
#include<conio.h>
int main()
{
    float A,B,C,MAX;

    printf("\n Enter three values");
    scanf("%d %d %d",&A,&B,&C);



    if(A>B)
    {
        if(A>C)
        {
            printf("\n %f",A);
        }
        else
        {
            printf("\n %f",B);
        }
    }
    else
    {
        if(C>B)
        {
            printf("\n %f",C);
        }
        else
        {
            printf("\n %f",B);
        }
    }

     printf("\n largest value is: %f",MAX);
}