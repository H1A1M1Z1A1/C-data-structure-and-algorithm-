#include <iostream>
#include <string>
#include <algorithm>
#include <cmath>
#include <vector>
using namespace std;

int main()
{
    int t, a;
    int a1,n;
    cin >> t;
    for (int i = 0; i < t; i++)
    {
        cin >> n;

        a = 360 / n;
        a1 = 360 / n;
        if (360%(180-n)==0)
        {
            cout << "Yes" << endl;
        }

        // else if (a == a1)
        // {
        //     cout << "YES" << endl;
        // }
        else
            cout << "NO" << endl;
    }
}