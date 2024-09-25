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
        int n,k;
        int as=0;
        int bs=0;
        cin>>n>>k;
        vi vec(n);
        fr(i,n){
            cin>>vec[i];
        } 

        sort(vec.begin(),vec.end());
        reverse(vec.begin(),vec.end());

        for(int i=0;i<n-1;i+=2){
            if(k >= (vec[i]-vec[i+1])){
                k -= (vec[i]-vec[i+1]);
                as += vec[i];
                vec[i+1] = vec[i];
                bs += vec[i+1];
            } else {
                vec[i+1] += k;
                k = 0;
                as += vec[i];
                bs += vec[i+1];
            }
        }

        if(n % 2 != 0) {
            as += vec[n-1];
        }

        cout << as-bs << endl;
    }
    return 0;
}
