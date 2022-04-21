#include <iostream>
#include <string>
#include <algorithm>
#include <cmath>
#include <numeric>
#include <vector>
using namespace std;
int main()
{
    int t, a, b, x, y, n = 2;
    cin >> t;
    for (int i = 0; i < t; i++)
    {
        cin >> a, b, x, y;
        if (a == x)
        {
            n = n - 1;
            x = 9;
        }
        else if (a == y)
        {
            n = n - 1;
            y = 9;
        }
        else if (b == x)
        {
            n = n - 1;
            x = 9;
        }
        else if (b == y)
        {
            n = n - 1;
            y = 9;
        }
        cout << n << endl;
    }
}