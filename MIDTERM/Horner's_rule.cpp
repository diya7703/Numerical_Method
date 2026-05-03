#include <iostream>
using namespace std;
int main()
 {
    int x;
    cout << "Enter the value of x :";
    cin >> x;
    int result;
    result = ((1 * x - 2) * x + 5) * x + 10;
    cout << "Value of polynomial at x = " << x
    << " is: " << result <<
    endl;
    return 0;
}
