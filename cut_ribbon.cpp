#include <iostream >

using namespace std;

int main()
{
    int c[4], p;
    for (int i = 0; i < 4; i++)
    {
        cin >> c[i];
    }

    
    if (c[1] + c[2] + c[3] <= c[0])
    {
        p = 3;
        cout << p;
    }
    

    else if (c[1] + c[2] + c[3] > c[0])
    {
        if (c[1] + c[2] == c[0])
        {
            p = 2;
            cout << p;
        }
        else if (c[1] + c[3] == c[0])
        {
            p = 2;
            cout << p;
        }
        else if (c[3] + c[2] == c[0])
        {
            p = 2;
            cout << p;
        }
        else
        cout<<1;
    }
}