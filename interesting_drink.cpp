#include <iostream >
using namespace std;
// #include <vector>
#include <string>
#include <algorithm>
#include <cmath>

using namespace std;

int main()
{
    int n, m, q, max, min;
    // int p = 0;

    cin >> m;
    int s[m];
    for (int j = 0; j < m; j++)
    {
        cin >> s[j];
      
        if (j > 0 && s[j] > s[j - 1])
        {
            max = s[j];
        }
        else if (j > 0 && s[j] < s[j - 1])
        {
            min = s[j];
        }
        else if (j==0)
        {
            max=s[j];
        }
        
      
    }
    sort(s, s + m);

    // cin >> q;
    // int x[q];
    // for (int k = 0; k < q; k++)
    // {
    //     int p = 0;

    //     cin >> x[k];
    //     for (int l = 0; l < m; l++)
    //     {
    //         if (x[k] >= s[l])
    //         {
    //             p++;

    //         }

    //     }
    //     cout<<p<<endl;
    // }
    // cout<<max<<min;
    int i = 1;
    int p = 0;
    cin >> q;
    while (i <= q)
    {
        p = 0;

        int x;
        cin >> x;
        for (int a = 0; a < m; a++)
        {

            if (x > max)
            {
                p = m;
                // cout << p;
                i++;

                break;
            }
            else if (x < s[a])
            {
                p = a;
                i++;
                // cout << p ;

                break;
            }
            else if (x == s[a])
            {
                p = a + 1;
                // cout << p ;
                i++;
                break;
            }
            else if (a == m - 1)
            {
                i++;
            }
        }
        cout << p << endl;
    }
}