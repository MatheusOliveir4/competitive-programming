#include <bits/stdc++.h>
using namespace std;

string removingNonAlphaNumeric(string s) {
    string newstr = "";

    for (char c : s) {
        if (isalpha(c)) {
            newstr += tolower(c);
            
        } else if (isdigit(c)) {
            newstr += c;  
        }
    } 

    return newstr;
}

bool isPalindrome(string s) {
    string newstr = removingNonAlphaNumeric(s);

    int low = 0;
    int high = newstr.size() - 1;

    while (low < high)
    {
        if (newstr[low] != newstr[high]) {
            return false;
        }

        low++;
        high--;
    }
    
    return true;
}

int main() {
    string s;
    cin >> s;

    cout << isPalindrome(s) << endl;

    return 0;
}