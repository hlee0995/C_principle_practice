/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>
#define Initial 100.00

int main(void)
{
    int i, low_rate, num_years, year;
    double value[5];
    
    printf("Enter interest rate : ");
    scanf("%d", &low_rate);
    printf("Enter number of years: ");
    scanf("%d", &num_years);
    
    printf("\nYears");
    for (i=0; i< (int) (sizeof(value) / sizeof (value[0])); i++) {
        printf("%6d%%", low_rate + i);
        value[i] = Initial;    }
        
    printf("\n"); /* printing years with interest rate*/
    
    for (year = 1; year <= num_years; year++){
        printf("%3d   ", year);
        for (i = 0; i < (int) (sizeof(value) / sizeof (value[0])); i++){
            value[i] += (low_rate + i) / 100.0 * value[i];
            printf("%7.2f", value[i]);
        }
        printf("\n");
    }
    
    
    
    
    return 0;
    
    
}
