#include <iostream>
#include <string>
#include <algorithm>
#include <cmath>
#include <numeric>
#include <vector>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int c[n];
    for (int j = 0; j < n; j++)
    {

        for (int i = 0; i < 3; i++)
        {
            cin >> c[i];
        }
        if (c[0]>=c[1] && c[0]>=c[2])
        {
            cout<<c[0]<<endl;
        }
        else if (c[1]>=c[0] && c[1]>=c[2])
        {
            cout<<c[1]<<endl;
        }
        else
        {
            cout<<c[2]<<endl;
        }
        
        
    }
}