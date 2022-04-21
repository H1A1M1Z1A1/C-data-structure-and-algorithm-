#include <iostream>
using namespace std;
// #include <vector>
#include <string>
#include <algorithm>
#include <cmath>
int main()
{
    int m, s, e = 0;
    cin >> m >> s;
    if (s == 0)
    {
        if (m == 1)
        {
            cout << "0 0";
            e++;
        }
        else
            cout << "-1 -1";
        e++;
    }
    string maxi = "";
    string mini = "";
    int c[m] = {};
    for (int i = 0; i < m; i++)
    {
        int k = min(9, s);
        maxi.push_back('0' + k);
        s -= k;

        c[i] = k;
    }
    if (s > 0)
    {
        cout << "-1 -1";
    }
    else if (s == 0 && e == 0 && c[0] != 0 && c[m-1]!=0)
    {
        for (int j = m - 1; j >= 0; j--)
        {
            cout << c[j];
        }
        cout << " ";

        for (int i = 0; i < m; i++)
        {
            cout << c[i];
        }
    }
    else if (s == 0 && e == 0 && c[m - 1] == 0)
    {

        for (int i = 0; i < m; i++)
        {
            cout << c[i];

        }
    }
    else if (s == 0 && e == 0 && c[0] == 0)
    {
        for (int j = m - 1; j >= 0; j--)
        {
            cout << c[j] << " " << c[j];
        }
    }
}

