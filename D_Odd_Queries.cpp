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

// void sumAndFind(vector<ll>& vec){
//     ll sum = accumulate(vec.begin(), vec.end(), 0LL);
//     if (sum % 2 == 0) {
//         cout << "NO" << endl;
//     } else {
//         cout << "YES" << endl;
//     }
// }

// int main(){
//     int t = 0;
//     cin >> t;
//     while(t--){
//         int n, q;
//         cin >> n >> q;
//         vector<ll> vec(n);
//         for(int i = 0; i < n; i++){
//             cin >> vec[i];
//         }

//         while(q--){
//             int l, r, k;
//             cin >> l >> r >> k;
//             l--; r--;

//             vector<ll> tempVec = vec;
//             fill(tempVec.begin() + l, tempVec.begin() + r + 1, k);

//             sumAndFind(tempVec);
//         }
//     }
//     return 0;
// }

//****ADWAIT PRASHANT BORATE****
// #include <bits/stdc++.h>
// #define ll long long
// #define uint unsigned long long
// #define vi vector<int>
// #define vvi vector<vi>
// #define vb vector<bool>
// #define vvb vector<vb>
// #define fr(i, n) for (int i = 0; i < (n); i++)
// #define rep(i, a, n) for (int i = (a); i <= (n); i++)
// #define all(v) v.begin(), v.end()
// #define sz(v) (int)(v.size())
// #define srt(v) sort(v.begin(), v.end())         // sort
// #define mxe(v) *max_element(v.begin(), v.end()) // find max element in vector
// #define mne(v) *min_element(v.begin(), v.end()) // find min element in vector
// #define unq(v) v.resize(distance(v.begin(), unique(v.begin(), v.end())));
// #define nl cout << "\n"
// using namespace std;

// int main()
// {
//     int t = 0;
//     cin >> t;
//     while (t--)
//     {
//         int n, q;
//         cin >> n >> q;
//         vector<ll> vec(n);
//         ll currentSum = 0;

//         for (int i = 0; i < n; i++)
//         {
//             cin >> vec[i];
//             currentSum += vec[i];
//         }

//         while (q--)
//         {
//             int l, r, k;
//             cin >> l >> r >> k;
//             l--;
//             r--;
//             ll rangeSum = accumulate(vec.begin() + l, vec.begin() + r + 1, 0LL);
//             ll count = r - l + 1;

//             ll newSum = currentSum - rangeSum + (count * k);

//             if (newSum % 2 != 0)
//             {
//                 cout << "YES" << endl;
//             }
//             else
//             {
//                 cout << "NO" << endl;
//             }
//         }
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
long long n,a[200005],q,sum=0,pref[200005],t;
int main(){
int t=0;
cin>>t;
  while(t--)
    {
        sum = 0;
        cin >> n >> q;
        for(int i=1;i<=n;i++){
            cin >> a[i];
            sum+=a[i];
            pref[i]=pref[i-1];
            pref[i]+=a[i];
        }
        for(int i = 0; i < q; i++){
            long long l,r,k;
            cin >> l >> r >> k;
            long long ans = pref[n]-(pref[r]-pref[l-1])+k*(r-l+1);
            if(ans%2==1){
                cout<<"YES"<<endl;
            }
            else
            {
                cout<<"NO"<<endl;
            }
        }
    }
return 0;
}