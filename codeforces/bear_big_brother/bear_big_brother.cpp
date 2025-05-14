#include <iostream>
#include <cmath>
using namespace std;

int bear_big_brother(int a, int b) {
    int k = 0;

    while (a <= b)
    {
        a = 3 * a;
        b = 2 * b;
        k++;
    }

    return k;
}

int main() {
    int a, b;
    cin >> a >> b;

    cout << bear_big_brother(a, b) << endl;

    return 0;
}