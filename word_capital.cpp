#include <iostream>
using namespace std;
int main()
{
    string s;
    cin>>s;
    cout<<(char) toupper(s[0]);
    for (int i = 1; i < s.size(); i++)
    {

        
        cout<<s[i];
    }
    
}