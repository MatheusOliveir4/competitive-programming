#include <iostream>
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

bool is_valid(long long n) {
    return n > 1 && !is_prime(n);
}

int main() {
    long long n;
    cin >> n;

    if (is_valid(n)) {
        cout << 'S'; 
    } else {
        cout << 'N'; 
    }

    return 0;
}
