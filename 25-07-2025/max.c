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
     int num,max=0;
     
    printf("Enter number");
    scanf("%d",&num);
    
      while(num>0)
    {
        
        int rem = num % 10;
        
        if(rem>max)
        {
            max = rem;
        }
        num=num/10;
    }
    
    printf("max digit is : %d",max);
    
    
    
    
    return 0;
}