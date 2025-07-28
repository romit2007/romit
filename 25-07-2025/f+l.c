/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
#include <conio.h>
int main()
{
     int num,fdigit=0,ldigit=0;
     
    printf("Enter number");
    scanf("%d",&num);
    
    ldigit=num%10;
    
    while(num>0)
    {
        if(num>9)
        {
            num=num/10;
        }
        else
        {
            fdigit=num;
            num=num/10;
        }
    }
    
    int ans = fdigit+ldigit;
    printf("Sum of first and last digit is : %d",ans);
    
    return 0;
}