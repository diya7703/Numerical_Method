#include <iostream>
#include <cmath>
using namespace std;

double f(double x)
{
    return x*x*x - 5*x*x - 29;
}

int main()
{
    double x0, x1, x2, error;

    cout<<"Enter first guess: ";
    cin>>x0;

    cout<<"Enter second guess: ";
    cin>>x1;

    do
    {
        x2 = x1 - (f(x1)*(x1-x0))/(f(x1)-f(x0));
        error = fabs(x2 - x1);
        x0 = x1;
        x1 = x2;

    }
    while(error >= 0.001);
    cout<<"Root = "<<x2<<endl;
    return 0;
}
