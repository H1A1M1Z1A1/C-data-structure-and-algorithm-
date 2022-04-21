#include <iostream>
#include <string>
#include <algorithm>
#include <cmath>
#include <vector>
using namespace std;

int main()
{
    int t, p = 0, e = 0;
    cin >> t;
    int c[t], s[t], a[2], b[2];
    for (int i = 0; i < t; i++)
    {
        cin >> c[i] >> s[i];
        if (c[i] != s[i])
        {
            a[e] = c[i];
            b[e] = s[i];
            e++;
        }
    }

    if (a[0] < a[1] && b[0] > b[1] && e > 0)
    {
        p++;
    }
    else if (a[1] < a[0] && b[1] > b[0] && e > 0)
    {
        p++;
    }

    if (p > 0 && e > 0)
    {
        cout << "Happy Alex";
    }

    else if (p <= 0 && e == 0)
    {
        cout << "Poor Alex";
    }
}
