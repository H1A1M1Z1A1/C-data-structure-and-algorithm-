#include <iostream>
using namespace std;
#include <algorithm>
int main()
{
    long p=0,c,e=0;
    string s,h;
    cin>>s;
    for (int i = 0; i < s.size()-1; i++)
    {
        for (int k = i+1; k < s.size(); k++)
        {
            if (s[k]==s[i])
            {

                h[e]=s[k];
                e++;

                s.erase(remove(s.begin(), s.end(), s[k]) , s.end() );
                break;
                
            }
            
        }
        
    }
    // c=s.length()+p;
    // if (c%2==0)
    // {
    //     cout<<"CHAT WITH HER!"<<p<<endl;
    //     cout<<s.size();
    // }
    // else
    // {
    //     cout<<"IGNORE HIM!"<<p<<endl;
    //     cout<<s.size();
    
for (int i = 0; i < h.size(); i++)
{
    cout<<h[i];
}

    
    
}