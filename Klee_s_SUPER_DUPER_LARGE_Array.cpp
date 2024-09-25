//****ADWAIT PRASHANT BORATE****
#include<bits/stdc++.h>
#define ll long long
using namespace std;

ll calculate_minimum_value(int n, int a) {
    ll total_sum = 0;
    ll prefix_sum = 0;
    ll suffix_sum = (n - 1) * (a + (n - 1)); // Total sum if choosing index n-1 as the middle

    ll min_value = LLONG_MAX;

    // Iterate to calculate total cost for each possible middle index
    for (int i = 0; i < n; ++i) {
        if (i > 0) {
            prefix_sum += (a + (i - 1)); // Add previous value to prefix_sum
        }
        suffix_sum -= (a + i); // Subtract current value from suffix_sum

        ll left_sum = i * (a + i) - prefix_sum;
        ll right_sum = suffix_sum - (n - i - 1) * (a + i);
        ll current_value = left_sum + right_sum;
        min_value = min(min_value, current_value);
    }

    return min_value;
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, a;
        cin >> n >> a;
        cout << calculate_minimum_value(n, a) << endl;
    }
    return 0;
}
