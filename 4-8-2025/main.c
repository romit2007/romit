

#include <stdio.h>

int main()
{
    int workingyear;
    
    printf("Enter working year");
    scanf("%d",&workingyear);
    
    if(workingyear>=10)
    {
        printf("Bonus ammount: 10000/-");
    }
    else if( workingyear>=5)
    {
        printf("Bonus ammount: 5000/-");
    }
    else if(workingyear>=4)
    {
        printf("Bonus ammount: 3000/-");
    }
    else
    {
        printf("Bous ammount: 2500/-");
    }

    return 0;
}