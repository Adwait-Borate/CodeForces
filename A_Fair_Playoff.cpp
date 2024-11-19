//**********ADWAIT PRASHANT BORATE*************/
#include <bits/stdc++.h>
using namespace std;
int main() {
  int t;
  cin >> t;
  while (t--) {
    vector<int> vec(4);
    for(int i=0;i<4;i++){
        cin>>vec[i];
    }
    if (min(vec[0], vec[1]) > max(vec[2], vec[3]) || max(vec[0], vec[1]) < min(vec[2], vec[3]))
      cout << "NO"<<endl;
    else
      cout << "YES"<<endl;
  }
}