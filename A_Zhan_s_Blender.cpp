#include <iostream>

using namespace std;

int main(){
    int t = 1;
    cin >> t;
    while(t--){
        int n, x, y;
        cin >> n >> x >> y;
        x = min(x, y);
        cout << (n + x - 1) / x << endl;
    }
}