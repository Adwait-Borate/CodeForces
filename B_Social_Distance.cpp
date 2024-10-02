#include <bits/stdc++.h>
 
using namespace std;
 
int main()
{
    ios_base::sync_with_stdio(false);
    int t;
    cin >> t;
    while (t--) {
        long long n, m;
        cin >> n >> m;
        long long sum=0, min_val=1e9, max_val=0;
        for (int i=1; i<=n; i++) {
            long long x;
            cin >> x;
            sum+=x, min_val=min(min_val, x), max_val=max(max_val, x);
        }
        //ok
        cout << (n+sum-min_val+max_val<=m ? "YES" : "NO") << "\n";
    }
    return 0;
}