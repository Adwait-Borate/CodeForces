//****ADWAIT PRASHANT BORATE****
#include<bits/stdc++.h>
using namespace std;

int main(){
    
    int t = 0;
    cin >> t;

    while (t--) { 
        int n;
        cin >> n;
        vector<long long> vec(n+1);
        vector<long long> prefix(n+1, 0);

        for (int i = 1; i <= n; i++) {
            cin >> vec[i];
            prefix[i] = prefix[i-1] + vec[i];
        } 

        string s;
        cin >> s;
        s = " " + s;

        int low = 1;
        int high = n;
        long long sum = 0;
        
        while (low < high) {

            while (low <= n && s[low] != 'L') low++;

            while (high >= 1 && s[high] != 'R') high--;
            
            if (low < high) {
                sum += prefix[high] - prefix[low-1];
                low++;
                high--;
            }
        }

        cout << sum << endl;
    }

    return 0;
}
