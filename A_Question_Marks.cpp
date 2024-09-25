//****ADWAIT PRASHANT BORATE****
// #include <bits/stdc++.h>
// #define ll long long
// using namespace std;

// int main() {
//     int t = 0;
//     cin >> t;

//     while (t--) { 
//         int n;
//         cin >> n;
//         string s;
//         int pts = 0;
//         cin >> s;
        
//         map <char, int> omap;
        
//         for (auto& i : s) {
//             if (i != '?') {
//                 omap[i]++;
//             }
//         }

//         for (char i : {'A', 'B', 'C', 'D'}) {
//             if (omap[i] > n) {
//                 pts += n; 
//             } else {
//                 pts += omap[i];
//             }
//         }

//         cout << pts << endl;
//     }

//     return 0;
// }


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
    int t=0;
    cin>>t;
    while(t--){ 
        int n;
        cin>>n;
        string s;
        cin>>s;

        int pts = 0;
        map <char,int> omap;

        for(auto& i : s){
            if(i != '?'){
                omap[i]++;
            }
        }

        for (auto& i : omap) {
            if (i.second > n) {
                pts += n; 
            } else {
                pts += i.second;
            }
        }

        cout << pts << endl;
    }
    
    return 0;
}

