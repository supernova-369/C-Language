#include <stdio.h>

int main()
{
    int x;
    printf("Enter the digit for which you want table : ");
    scanf("%d",&x);
    
    for (int i=1;i<=10;i++){
        int table=x*i;
        printf("%d X %d = %d\n",x,i,table);
    }

    return 0;
}


/*In C programming, %e (or %E) is a format specifier used in functions like printf 
and scanf to handle floating-point numbers (float/double) in scientific (exponential) notation,
showing a number as mantissa * 10^exponent (e.g., 1.234e+02), 
and can also refer to the mathematical constant \(e\) (approx 2.718) in some contexts or large-scale data.*/