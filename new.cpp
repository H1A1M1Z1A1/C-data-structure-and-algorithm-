#include <iostream>
using namespace std;
int main()
{
    int p, q, r, n, i = 1, s = 0;
    cin >> n;
    while (i <= n)
    {
        cin >> p >> q >> r;
        if (p + q + r >= 2)
        {
            i=i+1;
            s=s+1;
        }
        else
        {
            i=i+1;
        }
        

        
    }
    cout<<s;
}