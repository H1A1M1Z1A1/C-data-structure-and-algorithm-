#include <iostream>
using namespace std;
#include <algorithm>
#include <cmath>
#include <vector>
int main()
{
    int n;
    int l, p;
    // int c[100];
    cin >> n;

    for (int i = 0; i < n; i++)

    {
        cin >> l;
        int c[l + 1];

        p = pow(2, l);
        int s = 0;
        for (int k = 0; k <= l - 2; k++)
        {
            c[k] = k + 1;
            s = s + k + 1;
        }
        c[l - 1] = l - 1;
        c[l] = p - s - l + 1;

        for (int j = 0; j < l + 1; j++)
        {
            cout << c[j] << " ";
        }

        // for (int j = 0; j < n; j++)
        // {

        //     for (int i = 0; i < l+1; i++)
        //     {
        //          cout << c[i][j] <<" ";
        //     }
        //     cout << endl;
    }
}