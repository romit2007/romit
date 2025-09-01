#include<stdio.h>
#include<conio.h>
int main()
{
    int units,custnum;
    float charges;

    printf("\n Enter CUSTOMER NO. and UNITS consumed");
    scanf("%d %d",&custnum,&units);

    if(units<=200)
    {
        charges=0.5*units;
    }
    else if(units<=400)
    {
        charges=100+0.65*units;
    }
    else if(units<=600)
    {
        charges=230+0.8*(units-400);
    }
    else
    {
        charges=390+(units-600);
    }

    printf("\n \n Customer No: %d: Charges=%.2f\n",custnum,charges);
}
