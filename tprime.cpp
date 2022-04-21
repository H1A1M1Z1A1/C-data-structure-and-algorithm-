#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    int n;
    double h;
    cin >> n;

    double s[n];
    for (int i = 0; i < n; i++)
    {
        int p = 0;
        cin >> s[i];
        float y = sqrt(s[i]);
        if (y == sqrt(s[i]))
        {

            for (int j = 1; j <= y; j++)
            {
                int l = sqrt(s[i]);
                h = fmod(l, j);
                if (h == 0)
                {
                    p++;
                }
            }
            if (p == 2)
            {
                cout << "YES" << p<<endl;
            }
            else
            {
                cout << "NO" << p<<endl;
            }
        }
        else
            cout <<p<< "NO"<<endl;
    }
}