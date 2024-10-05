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
        ll n;
        cin >> n;
        vector<ll> vec(n);
        for (ll i = 0; i < n; i++)
        {
            cin >> vec[i];
        }

        map<ll, ll> omap;
        for (auto &i : vec)
        {
            omap[i]++;
        }

        vector<ll> v;
        for (auto &j : omap)
        {
            if (j.second >= 2)
            {
                v.push_back(j.first);
            }
        }

        if (v.size() < 2)
        {
            cout << "-1" << endl;
        }

        for (ll i = 0; i < n; i++)
        {
            if (vec[i] == v[0])
            {
                v[0] = -1;
                cout << "2" << " ";
            }
            else if (vec[i] == v[1])
            {
                v[1] = -1;
                cout << "3" << " ";
            }
            else
            {
                cout << "1" << " ";
            }
        }
        cout << "\n";
    }
    return 0;
}