#include <iostream>
#include <string>
#include <algorithm>
#include <cmath>
#include <numeric>
#include <vector>
using namespace std;

int main()
{
    long long int t,n,p=0;
    cin>>t;
    for (int i = 0; i < t; i++)
    {
        cin>>n;
        p=0;
        if (n>5 && n<=7)
        {
            p=1;
        }
        else if (n%7!=0 && n%7!=6)
        {
            p=int(n/7);
        }
        else if (n%7!=0 && n%7==6 )
        {
            p=int(n/7)+1;
            
        }
        cout<<p<<endl;
                
    }
    
}