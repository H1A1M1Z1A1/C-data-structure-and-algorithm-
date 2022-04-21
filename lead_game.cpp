#include <iostream>
#include <string>
#include <algorithm>
#include <cmath>
#include <numeric>
#include <vector>
using namespace std;

int main()
{
    vector<int> l1, l2;
    int t, m, n, s1 = 0, s2 = 0;
    cin >> t;
    for (int i = 0; i < t; i++)
    {
        cin >> m >> n;
        s1 = s1 + m;
        s2 = s2 + n;
        if (s1 > s2)
        {

            l1.push_back(s1 - s2);
        }
        else
        {
            l2.push_back(s2 - s1);
        }
    }
    if (accumulate(l1.begin(),l1.end(),0)>accumulate(l2.begin(),l2.end(),0))
    {
        cout<<1<<" "<<*max_element(l1.begin(), l1.end());
    }
    else
    {
        cout<<2<<" "<<*max_element(l2.begin(), l2.end());
    }
}