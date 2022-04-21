#include <iostream>
#include <string>
#include <algorithm>
#include <cmath>
#include <numeric>
#include <vector>
using namespace std;

int main()
{
    int count,x,y;
    cin>>count;
    for (int i = 0; i < count; i++)
    {
        cin>>x>>y;
        if (x>=y)
        {
            cout<<0<<endl;
        }
        else if (y>x && y%x==0)
        {
            cout<<(y/x)-1<<endl;
        }
        else
        {
            cout<<(y-(y%x))/x<<endl;
        }
        
    }
    return 0;
    
}