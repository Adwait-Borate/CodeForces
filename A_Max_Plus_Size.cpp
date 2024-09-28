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
int main() {
    int t; 
    cin >> t;

    while (t--) {
        int n; 
        cin >> n;

        vector<int> a(n);
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }

        int maxElement = *max_element(a.begin(), a.end());

        vector<int> maxIndices;
        for (int i = 0; i < n; i++) {
            if (a[i] == maxElement) {
                maxIndices.push_back(i);
            }
        }


        int totalCount = 0;

 
        for (int index : maxIndices) {
            int count = 1; 
            

            for (int i = index - 2; i >= 0; i -= 2) {
                count++;
            }

            for (int i = index + 2; i < n; i += 2) {
                count++;
            }

            totalCount = max(totalCount, count);
        }

        cout << maxElement + totalCount << endl;
    }

    return 0;
}