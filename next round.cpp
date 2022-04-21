#include <iostream >

using namespace std;

int main()
{
    int n,m,p,s=0,i=0;
    cin>>n>>m;
    while (i<n)
    {
        cin>>p;
        if (p>=m)
        {
            s++;
            i++;
        }
        else
        {
            i++;
        }
        
        
    }
    cout<<s;
}