#include <iostream>
#include <string>
#include <algorithm>
#include <cmath>
#include <numeric>
#include <vector>
using namespace std;

int main()
{
    int t,x,y;
    cin>>t;
    for (int i = 0; i < t; i++)
    {
        cin>>x>>y;
        if (2*y>x)
        {
            cout<<0<<endl;

        }
        else if (2*y<=x)
        {
            cout<<int(x/(2*y))<<endl;
        }
        
        
    }
    


}