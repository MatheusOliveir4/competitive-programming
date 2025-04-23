#include <iostream>
using namespace std;

int max_distance(int x, int y) {
    int half = y/2;

    return (x > half) ? x : y - x;
}

int maximal_area(int a, int b, int x, int y) {

    int distance_rows = max_distance(x, (a - 1));
    int distance_columns = max_distance(y, (b - 1));
    
    int first_result = distance_rows * b;
    int second_result = a * distance_columns;

    return (first_result >= second_result) ? first_result : second_result;
}

int main() {
    int n, a, b, x, y;
    cin >> n;

    int* results = new int[n];

    int count = 0;

    for (int i = 0; i < n; i++)
    {
        cin >> a >> b >> x >> y;
        int result = maximal_area(a, b, x, y);
        results[count++] = result;
    }
    
    for (int i = 0; i < n; i++)
    {
        cout << results[i] << endl;
    }
    

    return 0;
}