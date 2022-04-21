#include <iostream>
using namespace std;
#include <algorithm>
int main()
{
    long p=0,c;
    string s,h;
    cin>>s;
    for (int i = 0; i < s.size()-1; i++)
    {
        for (int k = i+1; k < s.size(); k++)
        {
            char h="";
            if (s[k]==s[i])
            {

                h=s[k];
                p++;
                
            }
            s.erase(remove(s.begin(), s.end(), h) , s.end() );
            
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