#include <bits/stdc++.h>
using namespace std;

double bankersRoundSig(double x, int n) {
    if (x == 0.0)
    {
        return 0.0;
    }

    int sign = (x < 0) ? -1 : 1;
    x = fabs(x);

    int exponent = floor(log10(x));
    double factor = pow(10, n - 1 - exponent);

    double temp = x * factor;
    long long integer_part = (long long) temp;
    double fractional_part = temp - integer_part;

    int next_digit = (int)(fractional_part * 10);

    if (next_digit > 5) {
        integer_part += 1;
    }
    else if (next_digit < 5) {

    }
    else {
        if (integer_part % 2 != 0) {
            integer_part += 1;
        }
    }

    double result = integer_part / factor;
    return sign * result;
}

int main() {
    double num;
    int n;

    cout << "Enter number: ";
    cin >> num;

    cout << "Enter significant figures: ";
    cin >> n;

    double rounded = bankersRoundSig(num, n);

    cout << "Rounded value: " << rounded << endl;

    return 0;
}
