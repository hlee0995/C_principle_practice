/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int main(void)
{
    int nom,denom,a, b, sur;
    
    printf("Enter a fraction: ");
    scanf("%d /%d", &nom, &denom);
    
    a=nom;
    b=denom;
    
    while(a != 0){
        
        sur = b % a;
        
        b = a;
        
        a = sur;
    }
    
    
    printf("In lowest terms: %d/%d\n" , nom / b, denom / b);
    
    return 0;
    

    
   

    }
    
    
