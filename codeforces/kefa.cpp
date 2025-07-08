
#include <bits/stdc++.h>
using namespace std;


int main()
{
    int n, i, v, count = 1, max = 1;
    cin >> n;
    
    vector<int>A(n);
    
    for (i = 0; i < n; i++) {
        cin >> v;
        A[i] = v;
    }
    
    for (i = 1; i < n; i++) {
        
        if (A[i] >= A[i - 1]) {
            count++;
        } else {
            if (max < count) {
                max = count;
            }
            count = 1;
        }
    }
    
    if (max > count) {
        cout << max << endl;
    } else {
        cout << count << endl;
    }


}
