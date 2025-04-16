#include <iostream>
#include <iomanip>
using namespace std;

double save_luke(int d, int l, int v1, int v2) {
    double t = (double) (l - d) / (v1 + v2);
    return t;
}

int main() {
    int d, l, v1, v2;
    cin >> d >> l >> v1 >> v2;

    cout << setprecision(20) << save_luke(d, l, v1, v2) << endl;

    return 0;
}   