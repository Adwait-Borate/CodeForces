// // //****ADWAIT PRASHANT BORATE****
// #include<bits/stdc++.h>
// #define ll long long
// #define uint unsigned long long
// #define vi vector<int>
// #define vvi vector<vi >
// #define vb vector<bool>
// #define vvb vector<vb >
// #define Yes cout << "YES" << endl
// #define No cout << "NO"  << endl
// #define fr(i,n) for(int i=0; i<(n); i++)
// #define rep(i,a,n) for(int i=(a); i<=(n); i++)
// #define all(v) v.begin(),v.end()
// #define sz(v) (int)(v.size())
// #define srt(v)  sort(v.begin(),v.end())         // sort 
// #define mxe(v)  *max_element(v.begin(),v.end())     // find max element in vector
// #define mne(v)  *min_element(v.begin(),v.end())     // find min element in vector
// #define unq(v)  v.resize(distance(v.begin(), unique(v.begin(), v.end())));
// #define nl cout<<"\n"
//  using namespace std;
// int main() {
//     int t;
//     cin >> t;
//     while (t--) {
//         int l, r, L, R;
//         cin >> l >> r >> L >> R;

//         int overlap = max(0, min(r, R) - max(l, L) + 1);
//         int lengthAlice = r - l + 1;
//         int lengthBob = R - L + 1;
//         int requiredLocks = max(0, (lengthAlice + lengthBob - overlap));

//         cout << requiredLocks << endl;
//     }
//     return 0;
// }


#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int l, r, L, R;
        cin >> l >> r >> L >> R;

        if (r < L) {
            // No Overlap (Alice is completely to the left) [yes]
            cout << 1 << endl;
        } else if (R < l) {
            // No Overlap (Alice is completely to the right)  [yes]
            cout << 1 << endl;
        } else if (l <= L && r >= R) {
            // Full Overlap (Bob's segment is within Alice's)
            cout << R - L << endl;
        } else if (L <= l && R >= r) {
            // Full Overlap (Alice's segment is within Bob's)
            cout << r - l << endl;
        } else if (l < L && r < R) {
            // End Overlap (Alice's end overlaps with Bob's start)  [no]
            cout << min(r - L + 1, R - l + 1) << endl;
        } else if (L < l && R < r) {                        
            // End Overlap (Bob's end overlaps with Alice's start)   [no]
            cout << min(R - l + 1, r - L + 1) << endl;
        } else {
            // Middle Overlap (Alice's and Bob's segments partially overlap)   
            int overlap_length = min(r, R) - max(l, L) + 1;
            cout << overlap_length << endl;
        }
    }

    return 0;
}
