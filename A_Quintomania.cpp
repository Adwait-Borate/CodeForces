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
int main(){
    int t = 0;
    cin >> t;
    while (t--) { 
        int n;
        cin >> n;  
        
        vector<int> vec(n);
        for (int i = 0; i < n; i++) {
            cin >> vec[i];
        }
        
        bool ans = true;
        for (int i = 0; i < n - 1; i++) {
            int diff = abs(vec[i] - vec[i + 1]);
            if (diff != 5 && diff != 7) {
                ans = false;
                break;
            }
        }

        if (ans) {
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
    }
    return 0;
}



