#include <bits/stdc++.h>
using namespace std;

int divisible(int a, int b) {
    if (a % b == 0) {
        return 0;
    } 
    
    int div = a / b;
    int res = b * (div + 1) - a;

    return res;
}

int main() {
    int n, i, a, b;
    cin >> n;

    for (i = 0; i < n; i++)
    {
        cin >> a >> b;
        cout << divisible(a, b) << endl;
    }
    

    return 0;
}