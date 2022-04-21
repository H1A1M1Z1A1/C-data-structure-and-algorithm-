#include <iostream>
#include <string>
#include <algorithm>
#include <cmath>
#include <vector>
using namespace std;

int main()
{
    int n, m, p=0;
    cin >> n;
    cin >> m;
    int n1=n;


if (m>n)
{


        while (m>n)
        {
            if (m%2==0)
            {
                m=m/2;
                p++;
            }
            else
            {
                m=m+1;
                p++;
            }
            
  
        }
        if (m!=n)
        {
            p=p+n-m;
            
        }
        
}
else
{
    p=n-m;
}

    cout << p;
}