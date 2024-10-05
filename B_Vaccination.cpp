//****ADWAIT PRASHANT BORATE****
#include <bits/stdc++.h>
#define ll long long
#define uint unsigned long long
#define vi vector<int>
#define vvi vector<vi>
#define vb vector<bool>
#define vvb vector<vb>
#define fr(i, n) for (int i = 0; i < (n); i++)
#define rep(i, a, n) for (int i = (a); i <= (n); i++)
#define all(v) v.begin(), v.end()
#define sz(v) (int)(v.size())
#define srt(v) sort(v.begin(), v.end())         // sort
#define mxe(v) *max_element(v.begin(), v.end()) // find max element in vector
#define mne(v) *min_element(v.begin(), v.end()) // find min element in vector
#define unq(v) v.resize(distance(v.begin(), unique(v.begin(), v.end())));
#define nl cout << "\n"
using namespace std;
int main()
{
    int t = 0;
    cin >> t;
    while (t--)
    {
        ll n, k, d, w;
        cin >> n >> k >> d >> w;
        vector<ll> time(n);

        for (ll i = 0; i < n; i++)
        {
            cin >> time[i];
        }
        ll firstvp,secondvp;
        vector<pair<ll,ll>>vp;
        for(ll i=0;i<n;i++){
            firstvp=time[i];
            secondvp=time[i]+w;
            vp.push_back(make_pair(firstvp, secondvp));
        }
        
        ll left,right,s=0,flag=0,vaccine,dose=k;
        for(ll i=0;i<n;i++){
           left=vp[s].second;
           right=left+d;
           if(((time[i]+w)>=left && (time[i]+w)<=right && dose>0) || ((time[i])>=left && (time[i])<=right && dose>0)) {
              if(flag==0){
                vaccine++;
              }
              dose--;
              flag=1;
           }else{
            s=i+1;
            dose=k;
            flag=0;
           }

        }

        cout<<vaccine<<endl;


    }
    return 0;
}


