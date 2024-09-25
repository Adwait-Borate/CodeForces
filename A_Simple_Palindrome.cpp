//****ADWAIT PRASHANT BORATE****
#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
    int t = 0;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        string ans = "";
        string vowels = "aeiou";

        // First, repeat the "aeiou" sequence as many times as possible
        int full_cycles = n / 5;
        int remainder = n % 5;

        // Append full cycles of "aeiou"
        for (int i = 0; i < full_cycles; i++) {
            ans += vowels;
        }

        // Append the remaining characters from the start of "aeiou"
        for (int i = 0; i < remainder; i++) {
            ans += vowels[i];
        }
        sort(ans.begin(),ans.end());
        cout << ans << endl;
    }
    return 0;
}
