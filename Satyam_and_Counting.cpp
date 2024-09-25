//****ADWAIT PRASHANT BORATE****
#include <bits/stdc++.h>
#define ll long long
#define vi vector<int>
#define vvi vector<vi >
#define vb vector<bool>
#define vvb vector<vb >
#define fr(i,n) for(int i=0; i<(n); i++)
#define rep(i,a,n) for(int i=(a); i<=(n); i++)
#define all(v) v.begin(),v.end()
#define sz(v) (int)(v.size())
#define srt(v)  sort(v.begin(),v.end())         // sort 
#define mxe(v)  *max_element(v.begin(),v.end())     // find max element in vector
#define mne(v)  *min_element(v.begin(),v.end())     // find min element in vector
#define unq(v)  v.resize(distance(v.begin(), unique(v.begin(), v.end())));
#define nl cout<<"\n"
using namespace std;

int count_right_triangles(const vector<pair<int, int>>& points) {
    unordered_map<int, int> x_count;
    unordered_map<int, int> y_count;

    // Count occurrences of x and y coordinates
    for (const auto& point : points) {
        x_count[point.first]++;
        y_count[point.second]++;
    }

    ll total_triangles = 0;

    // Calculate number of right triangles using x-coordinates
    for (auto it = x_count.begin(); it != x_count.end(); ++it) {
        int count = it->second;
        if (count >= 2) {
            total_triangles += (ll)count * (count - 1) / 2;
        }
    }

    // Calculate number of right triangles using y-coordinates
    for (auto it = y_count.begin(); it != y_count.end(); ++it) {
        int count = it->second;
        if (count >= 2) {
            total_triangles += (ll)count * (count - 1) / 2;
        }
    }

    // Each triangle is counted twice (once for each axis), so divide by 2
    total_triangles /= 2;

    return total_triangles;
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<pair<int, int>> points(n);

        for (int i = 0; i < n; ++i) {
            int x, y;
            cin >> x >> y;
            points[i] = {x, y};
        }

        cout << count_right_triangles(points) << endl;
    }
    return 0;
}
