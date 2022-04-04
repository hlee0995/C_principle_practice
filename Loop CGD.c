/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int main(void)
{
    int a, b, c;
    
    printf("Enter two integers: ");
    scanf("%d%d" , &a,&b);
    
    while(b != 0) {
        c = a%b;
        a=b;
        b=c;
        
    }
    
    printf("Greatest Common Divisor: %d\n", a);
    
    return 0;
    
       /* int m, n, r;

    printf("Enter two integers: ");
    scanf("%d%d", &m, &n);

    while (n != 0) {
        r = m % n;
        m = n;
        n = r;
    }

    printf("Greatest common divisor: %d\n", m);

    return 0;*/

    }
    
    
