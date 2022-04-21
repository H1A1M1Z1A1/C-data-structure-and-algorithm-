#include <iostream>
#include <string>
#include <algorithm>
#include <cmath>
#include <numeric>
#include <vector>
using namespace std;

int main()
{
    string s,p;
    int t;
    cin>>t;
    for (int i = 0; i < t; i++)
    {
        cin>>s>>p;
        int j=0;
        while (j<5)
        {
            if (s[j]==p[j])
            {
                cout<<"G";
                j++;
            }
            else{
                cout<<"B";
                j++;
            }
            
        }
        cout<<endl;
        

    }
    
}