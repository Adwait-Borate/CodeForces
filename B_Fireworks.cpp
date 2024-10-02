#include <iostream>
using namespace std;

// Custom GCD function
long long gcd(long long a, long long b) {
    while (b != 0) {
        long long temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}

// Function to calculate LCM
long long lcm(long long a, long long b) {
    return (a / gcd(a, b)) * b; // LCM formula
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        long long a, b, m;
        cin >> a >> b >> m;

        // Calculate LCM of a and b
        long long time = lcm(a, b);
        
        // Calculate the maximum number of fireworks visible
        long long maxFireworks = (time / a) + (time / b) + 1; // +1 for the firework launched at time t
        
        cout << maxFireworks << endl;
    }
    return 0;
}
