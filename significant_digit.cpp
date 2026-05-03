#include<bits/stdc++.h>
using namespace std;
int main()
{
    string number;
    int count = 0;
    bool nonZeroFound = false;
    cout << "Enter a number: ";
    cin >> number;

    for(int i = 0; i < number.length(); i++)
    {
        if(number[i] == '.')
            {
                continue;
            }
        if(number[i] != '0')
            {
                nonZeroFound = true;
            }
        if(nonZeroFound && number[i] != '.')
            {
                count++;
            }
    }
    cout << "Number of significant digits: " << count << endl;

     return 0;
}
