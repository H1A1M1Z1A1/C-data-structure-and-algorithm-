#include <iostream>
#include <string>
#include <algorithm>
#include <cmath>
#include <vector>
#define ll unsigned long long
using namespace std;

int main()
{
    ll t,p=0;
    cin >> t;
    int c[t];
    for (int i = 0; i < t; i++)
    {
        cin >> c[i];
        if (c[i] % 2 == 0)
        {
            p = c[i] / 2;
        }
        else
        {
            p = (c[i] - 1) / 2;
        }
        cout << p << endl;
    }
}