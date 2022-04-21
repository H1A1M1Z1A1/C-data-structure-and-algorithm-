#include <iostream>
#include <string>
#include <algorithm>
#include <cmath>
#include <vector>
using namespace std;

int main()
{
    int a, b, p = 0, input;
   
    cin >> a;
    cin >> b;
    int i = 1;
    while (i <= a)
    {

        if (i % b == 0 && i > 1)
        {

           
            a++;
            i++;
        }

        else
        {

            

            i++;
        }
    }
    cout << a;
}