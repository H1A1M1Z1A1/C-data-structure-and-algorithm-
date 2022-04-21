// #include <iostream>
// using namespace std;
// int main() {
// int arr1[];
// cin>>arr1;
// int n = sizeof(arr1)/sizeof(arr1[0]);
// sort(arr1, arr1+n);
// cout << "\n List of Array after sorting is: ";
// for (int i = 0; i < n; ++i)
// cout << arr1[i] << " ";
// return 0;
// }
#include <iostream>
using namespace std;
#include <algorithm>
int main()
{
    int n, m,c[3];
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> c[i];
    }
    m = sizeof(c) / sizeof(c[0]);
    sort(c, c + 4);
    for (int i = 0; i < n; ++i)
        cout << c[i] << endl;
    return 0;
}