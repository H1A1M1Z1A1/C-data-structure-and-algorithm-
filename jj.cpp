#include <iostream >

using namespace std;

int main()
{
    int n, m;
    cin >> n;
    int p,i=0;

    while (i<n)
    {
        cin >> m ;
        int c[m] = {};

        for (int j = 0; j < m; j++)
        {
            

            cin >> c[j];
        }
        for (int k = 2; k < m; k++)
        {
      
        

            if (c[0] != c[2] && c[0] != c[1])
            {
                i++;
                cout << 1 << endl;

                break;
            }
            else if ( c[1] != c[2] && c[1] != c[0])
            {
                i++;
                cout << 2 << endl;

                break;
            }
            else if ( c[k] != c[k - 1] && c[k] != c[k - 2])
            {
                i++;
                cout << k + 1 << endl;

                break;
            }
        }
        
    }
 
}