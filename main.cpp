#include<iostream>
#include<vector>
#include<string>
#include<algorithm>
using namespace std; 

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, k;
        cin >> n >> k;
        vector<int> a(n);
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }
        bool ok = true;
        for (int i = n - k; i < n; i++) {
            if (a[i] != a[n - k]) {
                ok = false;
            }
        }
        if (ok) {
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
    }
    return 0;
}