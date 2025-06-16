#include<stdio.h>
#include<limits.h>
int main()
{
    int n,num,max_num=INT_MIN;
    
    printf("How many numbers do you want to enter? ");
    scanf("%d",&n);
    
    printf("Enter %d number one by one \n",n);
    
    for(int i=0;i<n;i++)
    {
        scanf("%d",&num);
        if(num>max_num)
        {
            max_num=num;
            
        }
        
    }
    
    
    
    printf("Maximum num=%d\n",max_num);
    
    
    
    getch();
}