#include <iostream>

using namespace std;

int main() {
    int r = 0, n;
    cin >> n;
    int a[n];

    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    for (int j = 0; j < n; j++) {
        for (int k = 0; k < j; k++) {
            if (a[k] == a[j]) 
            cout<<a[k];

        }
    }
    // cout << r << endl;
    return 0;
}