#include <bits/stdc++.h>
using namespace std;

long long max_area_sum(long long l, long long n) {
    return (l - n + 1)  * (l - n + 1) + (n - 1);
}

int main() {
    long long l, n;
    cin >> l >> n;

    cout << max_area_sum(l, n) << endl;
    
    return 0;
}