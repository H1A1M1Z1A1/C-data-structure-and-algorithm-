#include <iostream>
#include <string>
#include <algorithm>
#include <cmath>
#include <numeric>
#include <vector>
using namespace std;

int main()
{

    int t, n, x;
    cin >> t;
    for (int i = 0; i < t; i++)
    {
        cin >> n >> x;

        if ((((float(3 * n - x) / 4) == int((3 * n - x) / 4))) && ((float(n + x) / 4) == int((n + x) / 4)))
        {
            cout << "YES" << endl << (n + x) / 4 <<" "<< (3 * n - x) / 4 <<" "<< n-(((n + x) / 4) + ((3 * n - x) / 4)) << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
        // cout<<(float(n + x) / 4)<<" "<<int((n + x) / 4);
    }
}