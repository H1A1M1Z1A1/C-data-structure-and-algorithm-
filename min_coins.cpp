#include <iostream>
#include <string>
#include <algorithm>
#include <cmath>
#include <numeric>
#include <vector>
using namespace std;

int main()
{
    int t,x;
    cin>>t;
    for (int i = 0; i < t; i++)
    {
        cin>>x;
        if (x%10==0)
        {
            cout<<x/10<<endl;
        }
        else if (x%5==0)     
        {
            cout<<(x+5)/10<<endl;
        }
        else
        {
            cout<<-1<<endl;
        }
    }
    
}