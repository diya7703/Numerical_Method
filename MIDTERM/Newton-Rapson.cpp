#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

double f(double x)
{
    return x*x*x - 6*x + 4;
}

double df(double x)
{
    return 3*x*x - 6;
}

int main()
{
    double x0, x1;
    double E = 0.001;
    cout << "Enter initial approximation x0: ";
    cin >> x0;

    do
    {
        x1 = x0 - f(x0) / df(x0);

        if (fabs(x1 - x0) < E)
            break;

        x0 = x1;

    } while (true);

    cout << fixed << setprecision(3);
    cout << "Root = " << x1 << endl;

    return 0;
}
