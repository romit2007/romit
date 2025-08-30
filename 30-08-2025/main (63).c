#include<stdio.h>
#include<conio.h>
int main()
{
    FILE *f1,*f2,*f3;
    int value;
    
    
    f1 = fopen("f1.txt", "w");
    f2 = fopen("f2.txt", "w");
    f3 = fopen("f3.txt", "w");

   
    
    printf("\n Enter value");
    scanf("%d",&value);
    
    fprintf(f1,"%d\n",value);
    
    if(value<33)
    {
        fprintf(f2,"%d\n",value);
    }
    else
    {
        printf(f3,"%d\n",value);
    }
    
     fclose(f1);
    fclose(f2);
    fclose(f3);
   
   return 0;
}