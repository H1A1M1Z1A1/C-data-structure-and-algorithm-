#include <iostream>
#include <string>
#include <algorithm>
#include <cmath>
#include <vector>
using namespace std;

int main()
{
    long long int n, m, p = 0, input;
    vector<long long int> s, c;
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        cin >> input;
        c.push_back(input);
    }
    sort(c.begin(), c.end());

    cin >> m;
    for (int j = 0; j < m; j++)
    {
        cin >> input;
        for (int a = 0; a < c.size(); a++)
        {
            if (input == c[a])
            {
                c.erase(c.begin() + a);
                p++;
                break;
               

            }
            else if (a==c.size()-1)
            {
                s.push_back(input);
            }
        }
    }


    m=s.size();
    n=c.size();
    sort(s.begin(), s.end());
    long long int l = 0;
    for (int k = 0; k < n; k++)
    {
        int a = l;

        while (l < m)
        {

            if (c[k] == s[l] + 1)
            {
                p++;
                l++;
                break;
            }
            else if (c[k] == s[l] - 1)
            {
                p++;
                l++;
                break;
            }
            else if (c[k] == s[l])
            {
                p++;
                l++;
                break;
            }
            else if (l == m - 1)
            {
                l = a;
                break;
            }
            else
            {

                l++;
            }
        }
    }

    cout << p;
}