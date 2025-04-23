#include <iostream>
using namespace std;
#include <map>

int min_value(int x, int y) {
    if (x < y) {
        return x;
    }

    return y;
}

int main() {
    int n;
    cin >> n;

    map<int, int> esq, dir;
    int tamanho;
    char lado_pe;

    for (int i = 0; i < n; i++)
    {
        cin >> tamanho >> lado_pe;
        
        if (lado_pe == 'E') {
            esq[tamanho]++;
        } else {
            dir[tamanho]++;
        }
    }

    int pares = 0;

    for (const auto& tamanho : esq) {
        auto it = dir.find(tamanho.first);
        if (it != dir.end()) {
            pares += min_value(dir.at(tamanho.first), tamanho.second);
        }
    }

    cout << pares << endl;

    return 0;
}