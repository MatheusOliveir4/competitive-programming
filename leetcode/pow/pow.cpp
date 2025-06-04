#include <bits/stdc++.h>
using namespace std;

// O(lg n)
double myPow(double x, int n) {
    if (n == 1) {
        return x;
    }

    if (n == -1) {
        return 1/x;
    }
    
    if (n == 0) {
        return 1;
    }

    double result;

    if (n % 2 == 0) {
        result = myPow(x, n/2);
        return result * result;

    } else {
        result = myPow(x, (n-1)/2);
        return result * result * x;
    }
}

int main() {
    double x;
    int n;

    cin >> x >> n;

    cout << myPow(x, n) << endl;

    return 0;
}