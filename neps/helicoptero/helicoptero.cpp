#include <bits/stdc++.h>
using namespace std;

char helicoptero(int h, int p, int f, int s) {
    if (s == 1) {
        while (f != p && f != h)
        {
            f = (f + 1) % 16;
        }
    } else {
        while (f != p && f != h)
        {
            if (f == -1) {
                f = 15;
            } else {
                f = (f - 1);
            }
        }
    }

    return (f == h) ? 'S' : 'N';
}

int main() {
    int h, p, f, s;
    cin >> h >> p >> f >> s;

    cout << helicoptero(h, p, f, s) << endl;

    return 0;
}