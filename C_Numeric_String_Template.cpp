//****ADWAIT PRASHANT BORATE****
#include <bits/stdc++.h>
using namespace std;

bool chkTemplate(const vector<int>& vec, const string& s) {
    if (vec.size() != s.size()) {
        return false; 
    }

    unordered_map<int, char> umapnumToChar;
    unordered_map<char, int> umapcharToNum;

    for (int i = 0; i < s.size(); ++i) {
        int num = vec[i];
        char ch = s[i];
        
        // Check num to char mapping
        if (umapnumToChar.find(num) != umapnumToChar.end()) {
            if (umapnumToChar[num] != ch) {
                return false;
            }
        } else {
            umapnumToChar[num] = ch;
        }

        // Check char to num mapping
        if (umapcharToNum.find(ch) != umapcharToNum.end()) {
            if (umapcharToNum[ch] != num) {
                return false;
            }
        } else {
            umapcharToNum[ch] = num;
        }
    }

    return true;
}

int main() {
    int t;
    cin >> t;

    while (t--) {  
        int n;
        cin >> n;
        
        vector<int> vec(n);
        for (int i = 0; i < n; ++i) {
            cin >> vec[i];
        }

        int m;
        cin >> m;
        vector<string> str(m);
        for (int i = 0; i < m; ++i) {
            cin >> str[i];
        }

        for (const string& s : str) {
            if (chkTemplate(vec, s)) {
                cout << "YES" << endl;
            } else {
                cout << "NO" << endl;
            }
        }
    }

    return 0;
}
