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
// int main()
// {
//     int t = 0;
//     cin >> t;
//     while (t--)
//     {
//         ll n, k;
//         ll cat = 0;
//         ll mouseCnt = 0;
//         ll micePos;
//         vector<ll> pos(k);
//         for (ll i = 0; i < k; i++)
//         {
//             cin >> pos[i];
//         }
//         sort(pos.begin(), pos.end());
//         reverse(pos.begin(), pos.end());

//         for (ll j = 0; j < k; j++)
//         {
//             micePos = n - pos[j];
//             if (micePos < n - cat)
//             {
//                 mouseCnt++;
//                 cat+=micePos;
//             }else{
//                 break;
//             }

//         }

//         cout << mouseCnt << endl;
//     }
//     return 0;
// }


int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        ll n, k;
        cin >> n >> k;
        vector<ll> pos(k);
        for (ll i = 0; i < k; i++)
        {
            cin >> pos[i];
        }

        sort(pos.begin(), pos.end(), greater<ll>());

        ll cat = 0;
        ll mouseCnt = 0;

        for (ll j = 0; j < k; j++)
        {
            ll micePos = pos[j];
            if (micePos > cat)
            {
                mouseCnt++;
                cat += (n - micePos);
            }
            else
            {
                break;
            }
        }

        cout << mouseCnt << endl;
    }
    return 0;
}
