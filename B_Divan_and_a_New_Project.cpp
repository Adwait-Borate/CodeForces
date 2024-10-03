//****ADWAIT PRASHANT BORATE****
#include <bits/stdc++.h>
#define ll long long
#define vi vector<int>
#define pii pair<int, int>
#define srt(v) sort(v.begin(), v.end()) // sort
#define rev(v) reverse(v.begin(), v.end())
#define nl cout << "\n"
using namespace std;

int main() {
    int t = 0;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> a(n);
        vector<pair<int, int>> visits; 
        
        for (int i = 0; i < n; i++) {
            cin >> a[i];
            visits.push_back({a[i], i});
        }

        srt(visits);
        rev(visits); 

        vector<int> coordinates(n + 1, 0); 
        ll right = 1, left = -1; 
        ll totalTime = 0;

        
        for (int i = 0; i < n; i++) {
            int idx = visits[i].second;
            int visitsCount = visits[i].first;

            if (i % 2 == 0) {  
                coordinates[idx + 1] = right;
                totalTime += 2 * abs(right) * visitsCount;
                right++;
            } else { 
                coordinates[idx + 1] = left;
                totalTime += 2 * abs(left) * visitsCount;
                left--;
            }
        }

        
        cout << totalTime << endl;
        
        
        cout << 0 << " ";
        for (int i = 1; i <= n; i++) {
            cout << coordinates[i] << " ";
        }
        nl;
    }
    return 0;
}
