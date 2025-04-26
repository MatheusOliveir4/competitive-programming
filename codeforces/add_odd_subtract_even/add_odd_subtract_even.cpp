#include <iostream>
#include <stdlib.h>
using namespace std;

bool is_even(int x) {
    return (x % 2 == 0);
}

int min_moves(int a, int b) {
    int result = a - b;
    int abs_result = abs(result);
    
    if (result == 0) return 0;

    if (result < 0) {
        if (is_even(abs_result)) {
            return 2;
        }
            return 1;
    } else {
        if (is_even(abs_result)) 
        {
            return 1;
        } 
        return 2;
    }

}

int main() {
    int n, a, b, i;
    cin >> n;

    int* A = new int[n];

    for (i = 0; i < n; i++)
    {
        cin >> a >> b;
        A[i] = min_moves(a, b);
    }
    
    for (i = 0; i < n; i++)
    {
        cout << A[i] << endl;
    }
    

    return 0;
}