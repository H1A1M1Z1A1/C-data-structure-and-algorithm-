#include <iostream>
#include <string>
#include <algorithm>
#include <cmath>
#include <vector>
using namespace std;

int main()
{
    int t, n, k, max,min,input,u;
    vector<int> a,b;

    cin>>t;
    for (int i = 0; i < t; i++)
    {

        cin >> n >> k;
        
        for (int j = 0; j < n; j++)
        { 
            cin >> input;
            a.push_back(input);
            if (j > 0 && a[j] > a[j - 1])
            {

                max = a[j];
            }
            else if (j > 0 && a[j] < a[j - 1])
            {
                min=a[j];
            }
            
            else if (j == 0)
            {
                max = a[j];
                min=a[j];
            }
        }
        for (int l = 0; l < n; l++)
        {
            cin >> input;
            b.push_back(input);
        }

        
        while (k >= max)
        {

            for (int o = 0; o < a.size(); o++)
            {
                u=0;

                if (k >= a[o])
                {
                    k = k + b[o];
                    a.erase(a.begin()+o);
                    u++;
                }
            }
            if (k < min)
            {
                break;
            }
            else if (u==0)
            {
               break;
            }
            
        }
        a.clear();
        b.clear();
        cout << k<<endl;
    }
    
    
}