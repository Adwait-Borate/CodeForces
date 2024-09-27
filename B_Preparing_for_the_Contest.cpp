//****ADWAIT PRASHANT BORATE****
#include<bits/stdc++.h>
#define ll long long
using namespace std;

int main(){
    int t = 0;
    cin >> t;
    
    while(t--){ 
        int n, k;
        cin >> n >> k;

        vector<int> vec(n);
        iota(vec.begin(), vec.end(), 1); 

        for(int i = 0; i <= k; i++) {
            cout << vec[i] << " ";
        }

        for(int i = n-1; i > k; i--) {
            cout << vec[i] << " ";
        }

        cout << endl;
    }
    return 0;
}
