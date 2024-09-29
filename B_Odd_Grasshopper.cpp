//****ADWAIT PRASHANT BORATE****
#include<bits/stdc++.h>
#define ll long long
#define uint unsigned long long
#define vi vector<int>
#define vvi vector<vi >
#define vb vector<bool>
#define vvb vector<vb >
#define fr(i,n) for(int i=0; i<(n); i++)
#define rep(i,a,n) for(int i=(a); i<=(n); i++)
#define all(v) v.begin(),v.end()
#define sz(v) (int)(v.size())
#define srt(v)  sort(v.begin(),v.end())         // sort 
#define mxe(v)  *max_element(v.begin(),v.end())     // find max element in vector
#define mne(v)  *min_element(v.begin(),v.end())     // find min element in vector
#define unq(v)  v.resize(distance(v.begin(), unique(v.begin(), v.end())));
#define nl cout<<"\n"
using namespace std;
#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main() {
    int t;
    cin >> t;
    
    while(t--) { 
        ll x, n;
        cin >> x >> n;
        ll d = 0;

        if (n % 4 == 0) {
            d = 0;
        } else if (n % 4 == 1) {
            d = -n;
        } else if (n % 4 == 2) {
            d = 1;
        } else if (n % 4 == 3) {
            d = n + 1;
        }

        if (x % 2 == 0) {
            cout << x + d << endl;
        } else {
            cout << x - d << endl;
        }
    }
    
    return 0;
}
