// //****ADWAIT PRASHANT BORATE****
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
//         int n, k;
//         ll profit = 0;
//         cin >> n >> k;
//         vector<pair<int, int>> bottles;
//         vector<int> desc;
//         set<int> uset;

//         for (int i = 0; i < k; i++)
//         {
//             int first, second;
//             cin >> first >> second;
//             bottles.push_back(make_pair(first, second));
//         }

//         for (auto &i : bottles)
//         {
//             uset.insert(i.first);
//         }

//         for (const auto &i : bottles)
//         {
//             desc.push_back(i.second);
//         }

//         sort(desc.rbegin(), desc.rend());

//         int ub = uset.size();

//         if (ub <= n)
//         {
//             for (auto &j : desc)
//             {
//                 profit += j;
//             }
//             cout << profit << endl;
//         }
//         else
//         {
//             for (int i = 0; i < n; i++)
//             {
//                 profit += desc[i];
//             }
//             cout << profit << endl;
//         }
//     }
//     return 0;
// }

// //****ADWAIT PRASHANT BORATE****
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
        int n, k;
        ll profit = 0;
        cin >> n >> k;

        vector<int> brands(k + 1);

        for (int i = 0; i < k; i++)
        {
            int first, second;
            cin >> first >> second;
            brands[first] += second;
        }

        vector<int> desc;
        int validCount = 0;

        for (int i = 1; i <= k; i++)
        {
            if (brands[i] > 0)
            {
                desc.push_back(brands[i]);
            }
        }

        sort(desc.rbegin(), desc.rend());

        profit = 0;

        int limit;
        if (n < desc.size())
        {
            limit = n;
        }
        else
        {
            limit = desc.size();
        }

        for (int i = 0; i < limit; i++)
        {
            profit += desc[i];
        }

        cout << profit << endl;
    }
    return 0;
}
