#include<stdio.h>
#include<conio.h>
int main()
{
    int a[3][3],b[3][3],result[3][3];
    int i,j,k;

    printf("Enter 1st matrix 3*3: ");

    for(i=0;i<3;i++)
    {
        
       for(j=0;j<3;j++)
       {
            scanf("%d",&a[i][j]);
       }
    }

     printf("Enter 2nd matrix 3*3: ");

    for(i=0;i<3;i++)
    {
        
       for(j=0;j<3;j++)
       {
            scanf("%d",&b[i][j]);
       }
    }

    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            for(k=0;k<3;k++)
            {
                result[i][j]=a[i][k]+b[j][k];
            }
        }
    }

    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            printf("result : %d",result[i][j]);
        }
         printf("\n");
    }
    


}