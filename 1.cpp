#include <iostream>
using namespace std;
#include <algorithm>
#include <vector>
int main()
{
    int n, b = 0, p = 2, d=0;
    cin >> n;
    int c[4];

    for (int i = 0; i < n; i++)
    {
        p = 2;
        b = 0;
        d = 0;

        for (int j = 0; j < 4; j++)
        {
            cin >> c[j];
        }
        char bw[c[0]][c[1]]={};
        // string bw;
        for (int k = 0; k < c[0]; k++)
        {
           

            for (int l = 0; l < c[1]; l++)
            {
                cin >> bw[k][l];

                if (bw[k][l] == 'B')
                {
                    b++;
                }
                if (bw[c[2] - 1][l] == 'B')
                {
                    d++;
                }
                if (bw[k][c[3] - 1] == 'B')
                {
                    d++;
                }
            }
        }
        if (b == 0)
        {
            p = -1;

        }
        else if (bw[c[2] - 1][c[3] - 1] == 'B')
        {
            p = 0;
      
        }
        else if (d > 0)
        {
            p = 1;
        }

        cout << p<<endl;
        
    }
}