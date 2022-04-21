#include <iostream>
#include <string>
#include <algorithm>
#include <cmath>
#include <numeric>
#include <vector>
using namespace std;

int main()
{
    int t ,x,y,m;
    cin>>t;

    for (int i = 0; i < t; i++)
    {
        cin>>x>>y>>m;
        if (x*m<y)
        {
            cout<<"YES"<<endl;
        }
        else
        {
            cout<<"NO"<<endl;
        }
        
    }
    
}