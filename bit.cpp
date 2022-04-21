#include <iostream >

using namespace std;

int main()
{
    int n, i = 1, s = 0, p;
    string c;
    cin >> n;
    while (i <= n)
    {
        cin >> c;

        if (c[1] == '+')
        {
            s=s+1;
            i=i+1;
        }
        else if (c[1] == '-')
        {
            s=s-1;
            i=i+1;
        }
        else
        {
            i=i+1;
        }
        
        
    }
    
    cout << s<<endl;
    return 0;
}