#include <iostream>
using namespace std;
// #include <vector>
#include <string>
#include <algorithm>
int main()
{
    int n;
    string s, ss, c;
    cin>>n;

    for (int i = 0; i < n; i++)
    {
        ss="";
        cin >> s;
        ss = s;
        c = "";

        for (int k = 0; k < s.size() - 1; k++)
        {
            for (int j = k + 1; j < s.size(); j++)
            {
                if (s[k] == s[j])
                {
                    ss.erase(remove(ss.begin(), ss.end(), s[k]), ss.end());

                    c = c + s[k] + s[k];
                }
            }
        }
        cout << ss + c << endl;
    }
}