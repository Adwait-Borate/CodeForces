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
#define srt(v) sort(v.begin(), v.end())         
#define mxe(v) *max_element(v.begin(), v.end()) 
#define mne(v) *min_element(v.begin(), v.end()) 
#define unq(v) v.resize(distance(v.begin(), unique(v.begin(), v.end())));
#define nl cout << "\n"
using namespace std;

int main()
{
    int t = 0;
    cin >> t;
    while (t--)
    {
        int n, k, q;
        cin >> n >> k >> q;
        vector<ll> vec(n);

        for (int i = 0; i < n; i++)
        {
            cin >> vec[i];
        }

        ll result = 0;
        ll count = 0;

        for (int left = 0; left < n; left++) 
        {
            if (vec[left] <= q) {
                count++;
            } else {
                count = 0;
            }

            if (count >= k) {
                result += (count - k + 1);
            }
        }

        cout << result << endl;
    }
    return 0;
}
