#include <iostream >

using namespace std;

int main()
{
    int s[4];
    int t, p = 0;

    for (int i = 0; i < 4; i++)
    {
        cin >> s[i];
    }

    if (s[0] >= s[1])
    {

        if (s[0] % s[1] == 0 && s[0] * s[2] > s[1] * s[3])
        {

            p = s[0] / s[1] * s[3];
            cout << p;
        }
        else if (s[0] % s[1] == 0 && s[0] * s[2] <= s[1] * s[3])
        {
            p = s[0] * s[2] ;
            cout << p;
        }

        else if (s[0] % s[1] > 0 && s[0] / s[1] * s[2] < s[0] / s[1] * s[3])
        {
            t = s[0] % s[1];
            p = s[0] / s[1] * s[3] + t * s[2];
            cout << p;
        }
        else if (s[0] % s[1] > 0)
        {
            p = (s[0] / s[1] + 1) * s[3];
            cout << p;
        }
    }
    else if (s[0] < s[1])
    {
        if (s[3] <= s[2] * s[0])
        {
            p = s[3];
            cout << p;
        }
        else
        {
            p = s[2] * s[0];
            cout << p;
        }
    }
}