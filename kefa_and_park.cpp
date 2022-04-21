#include <iostream>

using namespace std;

int main()
{
    int n,m,k=0;
    float p=0.0;
    cin>>n>>m;
    int s[n],c[1];
    for (int i = 0; i < n; i++)
    {
        cin>>s[i];
        if (s[i]==1 && s[i-1]==0)
        {
            p=p+0.5;
        }
        else if (s[i]==0 && s[i-1]==0)
        {
            p=p+0.5;
        }
        else if (s[i]==0 && s[i-1]==1)
        {
            p=p+0.5;
        }
        
        
        
    }
    for (int j = 0; j < n-1; j++)
    {
        cin>>c[0]>>c[1];   

        
    }
\

  
    
    
        
    
    
    cout<<p;
    

    
}