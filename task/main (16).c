#include<stdio.h>
#include<conio.h>
int main()
{
     int n,First=1,Second=2,next,i;
    
    printf("Enter n: ");
    scanf("%d",&n);
    
    printf("Fibbonaci series");
    
      for(i=0;i<n;i++)
    {
        printf("%d",First);
        next=First+Second;
        First=Second;
        Second=next;
    }
        
    
    
    return 0;
}