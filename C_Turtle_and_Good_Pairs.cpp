#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main() {
    int tes;
    cin >> tes;
    
    while (tes--) {
        int n;
        cin >> n;
        string s;
        cin >> s;
        
        vector<int> freq(26, 0);
        
        // Count the frequency of each character
        for (int i = 0; i < n; i++) {
            freq[s[i] - 'a']++;
        }
        
        string ans;
        
        // Append characters in lexicographical order until no more characters left
        while (true) {
            bool flag = false;
            for (int i = 0; i < 26; i++) {
                if (freq[i] > 0) {
                    ans += (char)(i + 'a');
                    freq[i]--;
                    flag = true;
                }
            }
            if (!flag) break; // Exit when no more characters are left
        }
        
        cout << ans << endl;
    }

    return 0;
}