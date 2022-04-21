#include <iostream>

using namespace std;

int main()
{
    int n,c[2];
    cin>>n;
    int r[n];
    for (int i = 0; i < n; i++)
    {
        c[0]=c[1]=0;
        cin>>c[0]>>c[1];
        r[i]=c[0]+c[1];

    }
    for (int k = 0; k < n; k++)
    {
        cout<<r[k]<<endl;;
    }
    
}