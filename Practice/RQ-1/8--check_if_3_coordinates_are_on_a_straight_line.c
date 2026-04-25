#include <stdio.h>
#include <math.h>

int main() {
    float x[3], y[3];
    float *px = x;   // put x's value into the place where px is pointing
    float *py = y;
    int i;

    printf("Enter coordinates of 3 points as x y:\n");

    // Input using for loop and pointers
    for (i = 0; i < 3; i++) {
        printf("Point %d (x y): ", i + 1);
        scanf("%f %f", &px[i], &py[i]);
    }

    // Using array indices directly in the triangle area formula
    float area_twice = px[0] * (py[1] - py[2]) +
                       px[1] * (py[2] - py[0]) +
                       px[2] * (py[0] - py[1]);

    if (fabsf(area_twice) < 1e-6) {
    //fabsf(area_twice) takes the absolute value of area_twice (ignores minus sign).
    //1e-6 means 0.000001 (a very small number).
    //fabs() works with double values.
    //fabsf() works with float values.
    //fabsl() works with long double values
        printf("\nThe three points lie on a straight line (collinear).\n");
    } else {
        printf("\nThe three points do NOT lie on a straight line.\n");
    }

    return 0;
}

//more complex was done but forgot to save