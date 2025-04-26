#include <iostream>
#include <string>
 
using namespace std;
 
char is_magic(string p, string b) {
    int i = 0, j = 0;
    
    int p_size = p.size();

    string double_b = b + b;
    int double_b_size = double_b.size();

    while (i < p_size && j < double_b_size) 
    {
        if (double_b[j] == p[i]) {
            i++;
        } else if (double_b[j] == p[0]){
            i = 1;
        } else {
            i = 0;
        }
        j++;
    }

    if (i == p_size) {
        return 'S';
    }

    while (i < p_size && j > -1) {
        if (double_b[j] == p[i]) {
            i++;
        } else if (double_b[j] == p[0]) {
            i = 1;
        } else {
            i = 0;
        }

        j--;
    }

    if (i == p_size) {
        return 'S';
    }

    return 'N';
}
 
int main()
{
    int n, i;
    string p, b;

    cin >> n;
 
    char* results = new char[n];

    for (i = 0; i < n; i++) {
        cin >> p >> b;
        results[i] = is_magic(p, b);        
    }

    for (i = 0; i < n; i++) {
        cout << results[i] << endl;
    }
}