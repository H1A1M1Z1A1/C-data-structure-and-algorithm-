#include <iostream>
using namespace std;
#include <algorithm>
int main()
{
    int n;
    cin >>n;
    int c[2];
    for (int i = 0; i < n; i++)
    {
        cin>>c[0]>>c[1];
        if ((c[0]+c[1])%2==0)
        {
            cout<<"Bob"<<endl;
        }
        else
        cout<<"Alice"<<endl;
        
    }
    
}