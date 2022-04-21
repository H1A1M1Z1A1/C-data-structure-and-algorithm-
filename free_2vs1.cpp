#include <iostream>
#include <string>
#include <algorithm>
#include <cmath>
#include <numeric>
#include <vector>
using namespace std;

int main()
{
    int t, n, x, p;
    cin >> t;
    for (int i = 0; i < t; i++)
    {
        cin >> n >> x;
        p = x * n;
        int item = 0,pra=0;
        while (item < n)
        {
            if (item == n - 1)
            {
                pra = x + pra;
                item=item+1;
                // cout<<pra<<"a"<<endl;
                break;
            }
            else
            {

                pra = x+x + pra;
                item = item + 3;
                // cout<<pra<<"b"<<endl;

            }
        }
        cout << min(p,pra) << endl;
    }
}