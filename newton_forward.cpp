#include <stdio.h>
using namespace std;
int main()
{
    int i, j, n = 5;
    float x[5] = {1, 2, 3, 4, 5};
    float y[5][5];
    float value = 1.7;
    float h, p, result;

    printf("Enter the values of y:\n");

    for(i = 0; i < n; i++)
    {
        scanf("%f", &y[i][0]);
    }

    for(j = 1; j < n; j++)
    {
        for(i = 0; i < n - j; i++)
        {
            y[i][j] = y[i+1][j-1] - y[i][j-1];
        }
    }

    h = x[1] - x[0];
    p = (value - x[0]) / h;


    result = y[0][0];

    float term = 1;

    for(i = 1; i < n; i++)
    {
        term = term * (p - (i - 1)) / i;
        result = result + term * y[0][i];
    }


    printf("\nInterpolated value at x = %.2f is %.4f\n", value, result);

    return 0;
}
