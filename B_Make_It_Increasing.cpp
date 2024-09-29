// //****ADWAIT PRASHANT BORATE****
// #include<bits/stdc++.h>
// #define ll long long
// #define uint unsigned long long
// #define vi vector<int>
// #define vvi vector<vi >
// #define vb vector<bool>
// #define vvb vector<vb >
// #define fr(i,n) for(int i=0; i<(n); i++)
// #define rep(i,a,n) for(int i=(a); i<=(n); i++)
// #define all(v) v.begin(),v.end()
// #define sz(v) (int)(v.size())
// #define srt(v)  sort(v.begin(),v.end())         // sort 
// #define mxe(v)  *max_element(v.begin(),v.end())     // find max element in vector
// #define mne(v)  *min_element(v.begin(),v.end())     // find min element in vector
// #define unq(v)  v.resize(distance(v.begin(), unique(v.begin(), v.end())));
// #define nl cout<<"\n"
// using namespace std;
// int main(){
// int t=0;
// cin>>t;
// while(t--){ 
//     int n;
//     cin>>n;
//     vector<int>vec(n);
//     for(int i=0;i<n;i++){
//         cin>>vec[i];
//     } 

//     int ans=0;
//     for(int i=n-1;i>0;i--){
//         if(vec[i]==0){
//             cout<<"-1"<<endl;
//             break;
//         }


//         while(vec[i-1]>0 && vec[i]<=vec[i-1]){
//             vec[i-1]/=2;
//             ans++;
//         }
//     }

//     cout<<ans<<endl;
// }
// return 0;
// }



#include<bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) { 
        int n;
        cin >> n;
        vector<int> vec(n);

        for (int i = 0; i < n; i++) {
            cin >> vec[i];
        }

        int ans = 0;  
        bool possible = true;

        for (int i = n - 1; i > 0; i--) {

            if (vec[i] == 0) {
                possible = false;
                break;
            }

            while (vec[i - 1] >= vec[i]) {
                if (vec[i - 1] == 0) {
                    possible = false;
                    break;
                }

                vec[i - 1] /= 2;
                ans++;
            }

            if (!possible) break;
        }

        if (possible) {
            cout << ans << endl;
        } else {
            cout << "-1" << endl;
        }
    }
    
    return 0;
}
