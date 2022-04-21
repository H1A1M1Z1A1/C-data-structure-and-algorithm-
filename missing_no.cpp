#include <iostream>
#include <string>
#include <algorithm>
#include <cmath>
#include <numeric>
#include <vector>
using namespace std;

int main()
{
    int t, x, y, a, b, c, d;
    cin >> t;
    for (int i = 0; i < t; i++)
    {
        int p=0,q=0;
        int ar[4];
        for (int j = 0; j < 4; j++)
        {
            cin >> ar[j];
        }
        sort(ar, ar + 4);
        a = ar[0];
        b = ar[1];
        c = ar[2];
        d = ar[3];
        x = (a + c) / 2;
        y = (c - a) / 2;

        // cout<<float((a+c)/2)<<" "<<float((c-a)/2);

        if (x == float((a + c) / 2) && y == float((c - a) / 2) && x * y == d && x - y < 0 )
        {
                cout << x << " " << y << endl;
                p++;
        }

        else
        {
            x = (a + d) / 2;
            y = (d - a) / 2;
            

        }
        if (x == float(a + d) / 2 && y == float(d - a) / 2 && x * y == c && x - y < 0 )

        {
            
                cout << x << " " << y << endl;
                q++;
        }
        if(p==0 && q==0)
        {
            cout << -1 << " " << -1 << endl;
        }
    }
}