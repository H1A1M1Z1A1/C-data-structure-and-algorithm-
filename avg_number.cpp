#include <iostream>
#include <string>
#include <algorithm>
#include <cmath>
#include <numeric>
#include <vector>
using namespace std;

int main()
{
    int t, n, k, v;
    for (int j = 0; j < t; j++)

    {
        cin >> n >> k >> v;
        int n1[n], sum = 0;
        for (int i = 0; i < n; i++)
        {
            cin >> n1[i];
            sum=sum+n1[i];
        }
        // sum = accumulate(n1, n1 + n, sum);
        if (((v * (k + n) - sum) / k) > 0)
        {
            cout << (v * (k + n) - sum) / k << endl;
        }
        else
        {
            cout << -1 << endl;
        }
    }
}