#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int maxScore(const vector<int>& a, int n) {
    // dp[i] stores the maximum score achievable by considering the first i elements
    vector<int> dp(n + 1, 0);  // Initialize dp array with 0s
    
    // Base case
    dp[0] = 0;  // No elements, score is 0
    dp[1] = a[0] + 1;  // Only one element, color it red
    
    // Iterate through the array from 2 to n
    for (int i = 2; i <= n; ++i) {
        // Option 1: Do not color this element red
        dp[i] = dp[i - 1];
        
        // Option 2: Color this element red, and add its value +1 to the score
        dp[i] = max(dp[i], dp[i - 2] + a[i - 1] + 1);
    }
    
    // The final result is stored in dp[n]
    return dp[n];
}

int main() {
    int t;
    cin >> t;
    
    while (t--) {
        int n;
        cin >> n;
        vector<int> a(n);
        for (int i = 0; i < n; ++i) {
            cin >> a[i];
        }

        // Solve for each test case
        cout << maxScore(a, n) << endl;
    }

    return 0;
}
