#include <iostream>
using namespace std;

int wrong_subtraction(int n) {
    return (n % 10 == 0) ? n / 10 : n - 1;
}

int main() {
    int n, k, result;
    cin >> n >> k;

    result = n;

    for (int i = 0; i < k; i++)
    {
        result = wrong_subtraction(result);
    }
    
    cout << result << endl;

    return 0;
}