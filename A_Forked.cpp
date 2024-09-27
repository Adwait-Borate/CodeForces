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
    int dx[4] = {-1, 1, -1, 1}, dy[4] = {-1, -1, 1, 1};
    int a,b,xk,yk,xq,yq;
    cin>>a>>b>>xk>>yk>>xq>>yq;
    set<pair<int ,int>>kset,qset;
    for(int j = 0; j < 4; j++){
            kset.insert({xk+dx[j]*a, yk+dy[j]*b});
            qset.insert({xq+dx[j]*a, yq+dy[j]*b});
            kset.insert({xk+dx[j]*b, yk+dy[j]*a});
            qset.insert({xq+dx[j]*b, yq+dy[j]*a});
        }
        int cnt=0;
        for(auto& i:kset){
              if(qset.find(i) != qset.end())
                cnt++;
        }

        cout<<cnt<<endl;

}
return 0;
}