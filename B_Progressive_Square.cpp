#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main() {
    int t;
    cin >> t;
    while(t--) {
        ll n, c, d;
        cin >> n >> c >> d;
        
        vector<ll> b(n * n);
        for(ll i = 0; i < n * n; i++) {
            cin >> b[i];
        }
        
        // Sort the given array b
        sort(b.begin(), b.end());

        // Generate the progressive square starting from 0 (it doesn't matter the starting value)
        vector<ll> square;
        ll a1_1 = b[0]; // Use the smallest value as the starting point
        for(ll i = 0; i < n; i++) {
            for(ll j = 0; j < n; j++) {
                square.push_back(a1_1 + i * c + j * d);
            }
        }
        
        // Sort the constructed square
        sort(square.begin(), square.end());

        // Compare the sorted arrays
        if (b == square) {
            cout << "YES\n";
        } else {
            cout << "NO\n";
        }
    }
    return 0;
}
