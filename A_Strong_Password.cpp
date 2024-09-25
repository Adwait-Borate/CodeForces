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
//         string s;
//         cin >> s;
//         int flag = 0;
//         string extra = "";
//         string currString = s[0];
//         unordered_set<char> uset;

//         for (auto &i : s)
//         {
//             uset.insert(i);
//         }

//         for (char ch = 'a'; ch <= 'z'; ch++)
//         {
//             if (uset.find(ch) == uset.end())
//             {
//                 extra = ch;
//                 break;
//             }
//         }

//         for (int i = 1; i < s.size(); i++)
//         {
//             if (s[i - 1] == s[i])
//             {
//                 if (flag == 0)
//                 {
//                     s[i] = extra;
//                     currString += s[i];
//                     flag = 1;
//                 }
//                 else
//                 {
//                     currString += s[i];
//                 }
//             }
//             else
//             {
//                 currString += s[i];
//             }
//         }

//         cout << currString << endl;
//     }
//     return 0;
// }



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
        string s;
        cin >> s;
        unordered_set<char> uset;

        for (auto &i : s)
        {
            uset.insert(i);
        }

        char extra = 'a'; // Initialize replacement character
        // Find a character that is not in the set
        for (char ch = 'a'; ch <= 'z'; ch++)
        {
            if (uset.find(ch) == uset.end())
            {
                extra = ch; // Assign the first missing character
                break;
            }
        }

        string currString = ""; // Store the final result

        for (int i = 0; i < s.size(); i++)
        {
            currString += s[i]; // Append current character
            // Check for consecutive characters
            if (i > 0 && s[i] == s[i - 1])
            {
                currString += extra; // Add the extra character between them
            }
        }

        cout << currString << endl; // Output modified string
    }
    return 0;
}
