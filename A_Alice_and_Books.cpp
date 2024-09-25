//****ADWAIT PRASHANT BORATE****
#include<bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while(t--) {
        int n;
        cin >> n;
        vector<int> books(n);
        long long total_sum = 0;

        for(int i = 0; i < n; i++) {
            cin >> books[i];
            total_sum += books[i];
        }

        // Find the largest book
        int max_book = *max_element(books.begin(), books.end());

        // Maximum pages Alice can read:
        long long result = max(total_sum, 2LL * max_book);
        cout << result << endl;
    }
    return 0;
}
