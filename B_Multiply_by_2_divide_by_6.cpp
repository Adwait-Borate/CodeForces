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
    int t;
    cin >> t;
    while (t--)
    {
        ll n;
        cin >> n;

        int cnt = 0;

        while (n > 1)
        {
            if (n % 6 == 0)
            {
                n /= 6;
                cnt++;
            }
            else if (n % 3 == 0)
            {
                n *= 2;
                cnt++;
            }
            else
            {
                cnt = -1;
                break;
            }
        }

        cout << cnt << endl; 
    }
    return 0;
}
