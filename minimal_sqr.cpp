#include <iostream >

using namespace std;

int main()
{
    int n, m, p, r = 0;
    cin >> n;
    int s[n],c[2];
    

    while (r < n)

    {
        c[0]=0,c[1]=0;
        for (int j = 0; j < 2; j++)
        {
            
            cin>>c[j];
        }
        if (c[1] <= 2 * c[0] && c[0] < c[1])
        {
            s[r] = 4 * c[0] * c[0];
            r++;
            
        }
        else if (c[0] <= 2 * c[1] && c[1] < c[0])
        {
            s[r] = 4 * c[1] * c[1];
            r++;
            
        }
        else if (c[0] == c[1])
        {
            s[r] = 4 * c[0] * c[1];
            r++;
            
        }
        else if (c[0]>c[1])
        {
            s[r]=c[0]*c[0];
            r++;
        }
        else if (c[1]>c[0])
        {
            s[r]=c[1]*c[1];
            r++;
        }
        
    }
    for (int i = 0; i < n; i++)
    {
        cout << s[i] << endl;
    }
}