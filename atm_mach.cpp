#include <iostream>
#include <string>
#include <algorithm>
#include <cmath>
#include <numeric>
#include <vector>
using namespace std;

int main()
{
   long long int t,n,k,s;
    cin>>t;
    for (int i = 0; i < t; i++)
    {
        cin>>n>>k;
        long long int n1[n];
        s=k;
        for (int j = 0; j < n; j++)
        {
            cin>>n1[j];
            if (n1[j]<=k)
            {
                cout<<"1";
                k=k-n1[j];
            }
            
            else
            {
                cout<<'0';
            }
            
        }
        cout<<endl;
        
    }
    return 0;
    
}