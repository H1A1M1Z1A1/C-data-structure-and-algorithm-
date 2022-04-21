#include <iostream >

using namespace std;

int main()
{
    int n, m, p;
    cin >> n;
    int s[n];
    // cin >> m;

    for (int r = 0; r < n; r++)
    {

        cin >> m;
        char c[m];
        for (int j = 0; j < m; j++)
        {

            cin >> c[j];
        }
        int o = 0;
        p = 0;
        while (o < m - 1)
        {

            for (int i = 1; i < m; i++)
            {
                if (c[i] != c[o])
                {
                    o = i;
                    for (int u = i; u < m; u++)
                    {
                        if (c[u] == c[i - 1])
                        {
                            p++;

                            break;
                        }

                        
                    }
                
                }
                else if (i==m-1)
                {
                    o=m;
                    break;

                }
                
            }

        }
        if (p > 0)
        {
            s[r]=p;
        }
        else
            s[r]=0;
    }
    for (int i = 0; i < n; i++)
    {
        if (s[i]>0)
        {
            cout<<"NO"<<endl;
        }
        else
            cout<<"YES"<<endl;

        
    }
    
}