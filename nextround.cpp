#include <iostream >

using namespace std;

int main()
{
    int sc,p,n,i=1,s=0;
    cin>>n>>p;
    int array[n];
    while (i<=n)
    {
        cin>>array[i-1];
        i++;
    }
    i=1;
    
    sc=array[p-1];
    while (i<=n)
    {
        if (array[i-1]>=sc && sc>0)
        {
            s=s+1;
            i=i+1;
        }
        else
        {
            i=i+1;
        }
        
        
        
        
    }
    cout<<s;
}