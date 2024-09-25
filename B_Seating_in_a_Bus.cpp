//****ADWAIT PRASHANT BORATE****
#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    
    while (t--) { 
        int n;
        cin >> n;
        
        vector<int> seated(n, 0);
        vector<int> vec(n);
        
        for (int i = 0; i < n; i++) {
            cin >> vec[i];
        }

        bool valid = true;
        
        for (int i = 0; i < n; i++) {
            int val = vec[i];
            int actual = val - 1;

            if (i == 0) { // First passenger can sit anywhere
                seated[actual] = 1;
            } else {
                if (actual == 0) { // First seat
                    if (seated[actual + 1] == 1) {
                        seated[actual] = 1;
                    } else {
                        valid = false;
                        break;
                    }
                } else if (actual == n - 1) { // Last seat
                    if (seated[actual - 1] == 1) {
                        seated[actual] = 1;
                    } else {
                        valid = false;
                        break;
                    }
                } else { // Middle seats
                    if (seated[actual - 1] == 1 || seated[actual + 1] == 1) {
                        seated[actual] = 1;
                    } else {
                        valid = false;
                        break;
                    }
                }
            }
        }
        
        if (valid) {
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
    }
    
    return 0;
}
