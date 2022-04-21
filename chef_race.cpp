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
        n=2;
        cin >> a>>b>>x>>y;
        if (a == x)
        {
            n = n - 1;
            x = 9;
        }
        if (a == y)
        {
            n = n - 1;
            y = 9;
        }
        if (b == x)
        {
            n = n - 1;
            x = 9;
        }
        if (b == y)
        {
            n = n - 1;
            y = 9;
        }
        cout << n << endl;
    }
}