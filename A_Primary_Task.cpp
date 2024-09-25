//****ADWAIT PRASHANT BORATE****
#include <bits/stdc++.h>
using namespace std;

bool GoodNumber(int a) {
    string s = to_string(a);
    int n=s.size();
    int remlen;
    if(s[0]=='1' && s[1]== '0' && n>2){
     remlen=s.size()-2;
     if(remlen==1){
        int lastCharAsInt = s[n-1] - '0';
        if(lastCharAsInt>=2){
            return true;
        }
        else if(lastCharAsInt==0 || lastCharAsInt==1){
            return false;
        }
     }
     else{
            string result = s.substr(2);
                if(result[0]=='0'){return false;}
        }

     return true;
    }
    return false;
}

int main() {
    int t;
    cin >> t;
    
    while (t--) {  
        int a;
        cin >> a;
        
        if (GoodNumber(a)) {
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
    }
    
    return 0;
}
