#include <bits/stdc++.h>
using namespace std;

int vestibular(string g1, string g2, int n) {
    int acertos = 0;
    
    for (int i = 0; i < n; i++) {
        if (g1[i] == g2[i]) {
            acertos++;
        }
    }
    
    return acertos;
}

int main()
{
    int n;
    cin >> n;
    
    string g1;
    cin >> g1;
    
    string g2;
    cin >> g2;
    
    cout << vestibular(g1, g2, n) << endl;

}
