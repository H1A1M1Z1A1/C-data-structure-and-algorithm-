#include <iostream>
#include <string>
using namespace std;

int main()
{
    int n,i=0,e=0,l,m;
    cin>>n;
    int s[n];
    while (i<n)
    {
        cin>>s[i];
        if (s[i]%2!=0)
        {
            l=i+1;
            i++;
            e++;
        }
        else
        {
            m=i+1;
            i++;
        }  
    }
    if (e>1)

    {
        cout<<m;
    }
    else
    {
        cout<<l;
    }
    
}