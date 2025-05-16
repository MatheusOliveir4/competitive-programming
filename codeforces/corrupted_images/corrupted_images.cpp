#include <bits/stdc++.h>
using namespace std;

int corrupted_images(int n, int m) {
    string v;
    int ones = 0, zeros = 0;

    for (int i = 0; i < n; i++)
    {
        cin >> v;
        
        if (i == 0 || i == n - 1) {
            for (int j = 0; j < m; j++)
            {
                if (v[j] == '0') {
                    zeros += 1;
                }
            }
        } else {
            for (int j = 0; j < m; j++)
            {
                if ((j == 0 || j == m - 1) && v[j] == '0') {
                    zeros += 1;
                } else if (j != 0 && j != m - 1 && v[j] == '1') {
                    ones += 1;
                }
            }
        }
    }

    if (ones < zeros) {
        return -1;
    }

    return zeros;
}

int main() {
    int t, n, m;
    
    cin >> t;
    
    for (int i = 0; i < t; i++)
    {
        cin >> n >> m;
        cout << corrupted_images(n, m) << endl;
    }

    return 0;
}