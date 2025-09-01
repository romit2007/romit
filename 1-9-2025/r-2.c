#include<stdio.h>
#include<conio.h>
int main()
{
    int count,i;
    float weight,height;
    count=0;
    printf("\n Enter weight and height for 10 boys");
    for(i=1;i<=10;i++)
    {
        scanf("%f %f",&weight,&height);
        if(weight<50 && height>170)
        count=count+1;
    }
    printf("\n Number of boys with weight < 50kgs");
    printf("and height > 170cm = %d\n",count);

    

}