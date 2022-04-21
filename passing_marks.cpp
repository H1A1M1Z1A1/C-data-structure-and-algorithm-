#include <iostream>
using namespace std;
int main()
{
    int n,c[7],p=0;
    cin>>n;
    for (int i = 0; i < n; i++)
    {
        p=0;
        for (int j = 0; j < 7; j++)
        {
            cin>>c[j];
        }
        if ((c[4]+c[5]+c[6])<c[3])
        {
            p++;
        }
        else if (c[4]<c[0] | c[5]<c[1] | c[6]<c[2])
        {
            p++;
        }
        if (p>0)
        {
            cout<<"no"<<endl;
        }
        else
        {
            cout<<"yes"<<endl;
        }
             
    }
    
}