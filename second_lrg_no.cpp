#include <iostream >

using namespace std;

int main()
{
    int a, b, c,n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> a >> b >> c;

        if ((a >= b && a <= c) | (a >= c && a <= b))
        {
            cout << a<<endl;
        }
        else if ((b >= a && b <= c) | (b >= c && b <= a))
        {
            cout << b<<endl;
        }
        else
        {
            cout << c<<endl;
        }
    }
}