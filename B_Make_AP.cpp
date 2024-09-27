//****ADWAIT PRASHANT BORATE****
#include<bits/stdc++.h>
using namespace std;

int main() {
    int t = 0;
    cin >> t;
    while (t--) { 
        int a, b, c;
        cin >> a >> b >> c;
        int flag = 0;

        if ((b - a) == (c - b)) {
            flag = 1;
        } 

        else if ((a + c) % (2 * b) == 0) {
            flag = 1;
        }

        else if ((2 * b - a) > 0 && (2 * b - a) % c == 0) {
            flag = 1;
        }

        else if ((2 * b - c) > 0 && (2 * b - c) % a == 0) {
            flag = 1;
        }


        if (flag == 1) {
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
    }
    return 0;
}
