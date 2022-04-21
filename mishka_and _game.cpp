#include <iostream >

using namespace std;

int main()
{
    int c[2],n,p=0,q=0,
    cin>>n;
    for (int i = 0; i < n; i++)
    {
        cin<<c[0]<<c[1];
        if (c[0]>c[1])
        {
            p++;
        }
        else if (c[1]>c[0])
        {
            q++;
        }
        
        
    }
    if (p>q)
    {
        cout<<"Mishka"<<endl;
    }
    else if (p<q)
    {
        cout<<"Chris"<<endl;
        
    }
    else
    {
        cout<<"Friendship is magic!^^"<<endl;

    }
    
}