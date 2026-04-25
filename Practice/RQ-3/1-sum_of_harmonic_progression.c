#include <stdio.h>

int main()
{
    int n;
    double s = 0.0;

    printf("Enter number of terms: ");
    if (scanf("%d", &n) != 1 || n <= 0)
    {
        printf("Invalid input\n");
        return 0;
    }

    printf("Harmonic Progression: ");

    for (int i = 1; i <= n; i++)
    {
        printf("1/%d", i);
        s += 1.0 / i;

        if (i < n)
            printf(" + ");
    }

    printf("\nSum = %.6f\n", s);

    return 0;
}

/*
A harmonic progression (HP) is a sequence where the reciprocals of its terms form an arithmetic progression (AP),
meaning if you take the inverse of each number
*/

/*
A harmonic series is the infinite sum of the reciprocals of positive integers (1 + 1/2 + 1/3 + 1/4 + ...), 
famous for being a divergent series, meaning its sum grows infinitely large, despite its terms getting smaller and smaller. 
It's crucial in calculus for testing convergence and has ties to music, 
where overtones (harmonics) have wavelengths related by these fractions (1/2, 1/3, etc
*/

/*
A harmonic function is a twice continuously differentiable function that satisfies Laplace's equation, 
meaning the sum of its second partial derivatives is zero (∇²u = ∂²u/∂x² + ∂²u/∂y² = 0). 
These functions describe steady-state physical phenomena like heat distribution, electrostatic potential, and fluid flow, and
have the unique "mean value property," where the function's value at a point is the average of its values on any surrounding circle or sphere. 
*/