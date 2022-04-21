#include <iostream>
using namespace std;
#include <vector>
int main()
{
    int n, m, p = 0;
    // vector<int> p;
    cin >> n >> m;

    while (n >= 0)
    {
        if (p==0)
        {
            n--;
            p++;
            // cout<<n<<p<<endl;
   

        }
        

        else if ((p) % m != 0 | p==1)
        {
            n--;

            p++;
            // cout<<n<<p<<endl;

           
        }

        else 
        {

            p++;
            // cout<<n<<p<<endl;

           
        }

        
    }
    cout << p-1;
}
