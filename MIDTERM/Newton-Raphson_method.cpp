#include <iostream>
#include <cmath>
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
    double x0, x1, error;


    cout<<"Enter initial guess: ";
    cin>>x0;

    do
    {
        x1 = x0 - f(x0)/df(x0);
        error = fabs(x1 - x0);
        x0 = x1;
    }
    while(error >= 0.001);


    cout<<"Root = "<<x1<<endl;


    return 0;
}
