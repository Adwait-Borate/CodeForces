#include <iostream>
#include <vector>
#include <string>
using namespace std;

int main() {
    int n;
    cin >> n;
    int x = 0;
    vector<string> statements(n);
    
    for (int i = 0; i < n; ++i) {
        cin >> statements[i];
        if (statements[i].find("++") != string::npos) {
            x++;
        } else {
            x--;
        }
    }
    
    cout << x << endl;
    return 0;
}
