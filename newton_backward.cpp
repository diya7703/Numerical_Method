#include <stdio.h>

int main()
{
    int i, j, n = 5;
    float x[5] = {1, 2, 3, 4, 5};
    float y[5][5];
    float value = 4.7;
    float h, p, result;

    printf("Enter the values of y:\n");


    for(i = 0; i < n; i++)
    {
        scanf("%f", &y[i][0]);
    }


    for(j = 1; j < n; j++)
    {
        for(i = n - 1; i >= j; i--)
        {
            y[i][j] = y[i][j-1] - y[i-1][j-1];
        }
    }


    h = x[1] - x[0];
    p = (value - x[n-1]) / h;


    result = y[n-1][0];

    float term = 1;

    for(i = 1; i < n; i++)
    {
        term = term * (p + (i - 1)) / i;
        result = result + term * y[n-1][i];
    }


    printf("\nInterpolated value at x = %.2f is %.4f\n", value, result);

    return 0;
}
