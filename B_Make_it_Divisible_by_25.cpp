#include <bits/stdc++.h>
using namespace std;

int min_steps(string n) {
    int len = n.length();
    int ans = len;

    for (int i = len - 1; i >= 0; --i) {
        if (n[i] == '0' || n[i] == '5') {
            for (int j = i - 1; j >= 0; --j) {
                if ((n[i] == '0' && n[j] == '0') || 
                    (n[i] == '5' && n[j] == '2') || 
                    (n[i] == '5' && n[j] == '7') || 
                    (n[i] == '0' && n[j] == '5')) {

                    ans = min(ans, len - j - 2); 
                    break;
                }
            }
        }
    }
    return ans;
}

int main() {
    int t;
    cin >> t;
    
    while (t--) {
        string n;
        cin >> n;

        cout << min_steps(n) << endl;
    }

    return 0;
}
