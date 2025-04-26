#include <iostream>
#include <stack>
#include <string>
using namespace std;

int number_diamonds(string diamonds_string) {
    stack<char> s;
    int i, count = 0;

    for (i = 0; i < diamonds_string.size(); i++)
    {
        if (diamonds_string[i] == '<') {
            s.push(diamonds_string[i]);
            cout << s.top() << endl; 
        } else if (diamonds_string[i] == '>' && !s.empty()) {
            s.pop();
            count++;
        }
    }
    
    return count;
}

int main() {
    string diamonds_string = "";

    int n;
    cin >> n;

    int* results = new int[n];

    for (int i = 0; i < n; i++)
    {   
        cin >> diamonds_string;
        results[i] = number_diamonds(diamonds_string);
    }
    
    for (int i = 0; i < n; i++)
    {
        cout << results[i] << endl;
    }
    

    return 0;
}