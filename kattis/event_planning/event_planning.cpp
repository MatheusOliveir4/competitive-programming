#include <iostream>
using namespace std;

int event_planning(int n, int b, int h, int w) {
    int price_person, beds_per_week, total_price = b + 1, price_week;
    
    for (int i = 0; i < h; i++)
    {
        cin >> price_person;

        for (int j = 0; j < w; j++)
        {
            cin >> beds_per_week;
            price_week = n * price_person;

            if (beds_per_week >= n && price_week < total_price) {
                total_price = price_week;
            }
        }
    }

    return total_price;
    
}

int main() {
    int n, b, h, w;
    cin >> n >> b >> h >> w;

    int total_price = event_planning(n, b, h, w);    

    if (total_price > b) {
        cout << "stay home" << endl;
    } else {
        cout << total_price << endl;
    }

    return 0;
}