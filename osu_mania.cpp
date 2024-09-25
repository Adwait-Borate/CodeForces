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

int main() {
    int t = 0;
    cin >> t;
    while(t--) { 
        int n;
        cin >> n;
        
        vector<string> vec(n); 

        for(int i = 0; i < n; i++) {
            cin >> vec[i];
        }

        vector<int> ans; 



        for(int i = n - 1; i >= 0; i--) {
            for(int j = 0; j < vec[i].size(); j++) { 
                if(vec[i][j] == '#') {
                    ans.push_back(j + 1); 
                    break; 
                }
            }
        }


        for(int i = 0; i < ans.size(); i++) {
            cout << ans[i] << " ";
        }
        nl; 
    }
    return 0;
}
