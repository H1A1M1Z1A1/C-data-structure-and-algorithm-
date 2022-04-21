#include <iostream >

using namespace std;

int main()
{
    int n;
    cin>>n;
    int c[n],s[n];
    long long p=1;
    string st;
    for (int i = 0; i < n; i++)
    {
        p=1;
        cin>>c[i];
        for (int k = 1; k <= c[i]; k++)
        {
            p=k*p;
            

        }
        st=p;
        
        // s[i]=p;
        cout<<st.int();
        
    }
    // for (int i = 0; i < n; i++)
    // {
    //     cout<<s[i]<<endl;
    // }
}