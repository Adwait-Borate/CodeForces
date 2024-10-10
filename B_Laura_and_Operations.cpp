#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

const int MAXN = 101;  // Max value for a, b, and c

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    // Precompute all results for all possible (a, b, c)
    vector<vector<vector<bool>>> dp(MAXN, vector<vector<bool>>(MAXN, vector<bool>(MAXN, false)));

    // Base cases: if only one type of digit is non-zero
    for (int i = 1; i < MAXN; ++i) {
        dp[i][0][0] = true;  // only 1's left
        dp[0][i][0] = true;  // only 2's left
        dp[0][0][i] = true;  // only 3's left
    }

    // Fill the DP table by checking transitions
    for (int a = 0; a < MAXN; ++a) {
        for (int b = 0; b < MAXN; ++b) {
            for (int c = 0; c < MAXN; ++c) {
                if (a > 0 && b > 0 && !dp[a-1][b-1][c+1]) dp[a][b][c] = true;
                if (b > 0 && c > 0 && !dp[a+1][b-1][c-1]) dp[a][b][c] = true;
                if (a > 0 && c > 0 && !dp[a-1][b+1][c-1]) dp[a][b][c] = true;
            }
        }
    }

    int t;
    cin >> t;
    while (t--) {
        int a, b, c;
        cin >> a >> b >> c;
        
        // Output the result for this test case
        cout << (dp[a][b][c] ? "1 1 1" : "0 1 0") << endl;
    }

    return 0;
}
