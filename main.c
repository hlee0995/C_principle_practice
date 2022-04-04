/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int main(void) {
    
    float n, i, e, f;
    
    printf("Enter n to compute e value: ");
    scanf("%f", &n);
    
    for(i=1.0f,f=1.0f, e=1.0f; i<=n; i++){
        e += 1 / (f *= i);
    }
    
    
    /*for(i=1.0f; i<=n; i++){
        e = 1/i;
    }*/
    
    printf("\n%f", e);
    
    return 0;
    
}

/*
#include <stdio.h>

int main(void) {

    int i, n, denom;
    float e;

    printf("Enter integer n: ");
    scanf("%d", &n);

    for (i = 1, denom = 1, e = 1.0f; i <= n; i++) {
        e += 1.0f / (denom *= i);
    }
    printf("Approximation of e: %f\n", e);
=
    return 0;
}

    