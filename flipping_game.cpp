#include <iostream>
#include <string>
#include <algorithm>
#include <cmath>
#include <vector>
using namespace std;

int main()
{
    int n, a = 0, b = 0, p = 0;
    cin >> n;
    int c[n];
    for (int i = 0; i < n; i++)
    {
        cin >> c[i];
        if (c[i] == 0)
        {
            a++;
        }
        else
        {
            b++;
        }
    }
    if (a == 0)
    {
        p = 0;
    }

    else if (a == 1)
    {
        p = a + b;
    }
    else if (a >= 2)
    {
        p = 2 + b;
    }

    cout << p;
}