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

string join(const vector<string>& v, const string& delimiter) {
    string result;
    for (size_t i = 0; i < v.size(); ++i) {
        result += v[i];
        if (i < v.size() - 1) {
            result += delimiter;
        }
    }
    return result;
}

string process_test_case(int n, int q, vector<int>& x, vector<int>& queries) {
    unordered_map<int, int> freq;

    for (int c = 1; c <= n; ++c) {
        // Calculate coverage at p = x_c
        int k_p = (c - 1) * (n - c + 1) + (n - c);
        freq[k_p]++;

        if (c < n) {
            int delta = x[c] - x[c - 1] - 1;
            if (delta > 0) {
                int k_between = c * (n - c);
                freq[k_between] += delta;
            }
        }
    }

    // Prepare answers for queries
    vector<string> answers;
    for (int ki : queries) {
        answers.push_back(to_string(freq[ki]));
    }

    return join(answers, " ");
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t = 0;
    cin >> t;

    vector<string> results;

    for (int i = 0; i < t; ++i) {
        int n, q;
        cin >> n >> q;

        vector<int> x(n);
        for (int j = 0; j < n; ++j) {
            cin >> x[j];
        }

        vector<int> queries(q);
        for (int j = 0; j < q; ++j) {
            cin >> queries[j];
        }

        string result = process_test_case(n, q, x, queries);
        results.push_back(result);
    }

    cout << join(results, "\n") << endl;

    return 0;
}
