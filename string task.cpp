#include <iostream >

using namespace std;

int main()
{
    int i=0,l;

    string s,c;
    cin>>s;
    l=s.size();
    while (i<l)
    toupper(s[i]);
    {
        if (s[i]=='a' | (s[i])=='e'| (s[i])=='i' | (s[i])=='o' | (s[i])=='u')
        {
            
            s.erase(remove(s.begin(), s.end(), s[i]), s.end());
            i++;
        }
        else
        {
            // c[i]='.';
            // c[i+1]=s[i];
            i++;

        }
        



    }
    cout << c;

}