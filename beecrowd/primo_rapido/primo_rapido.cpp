#include <bits/stdc++.h>
using namespace std;

bool is_prime(long long n) {
    if(n == 2)
        return true;

    if(n % 2 == 0)
        return false;

    for(long long i = 3; i*i <= n; i += 2)
        if(n % i == 0)
            return false;

    return true;
}

int main() {
    int x;
    cin >> x;

    long long n;

    for (int i = 0; i < x; i++)
    {
        cin >> n;
    
        if (is_prime(n)) {
            cout << "Prime" << endl;
        } else {
            cout << "Not Prime" << endl;
        }
    }
    
    return 0;
}