#include <bits/stdc++.h>
using namespace std;

bool isAnagram(string s, string t) {
    unordered_map<char, int> hash;

    int s_size = s.size();
    int t_size = t.size();

    if (s_size != t_size) {
        return false;
    }

    for (int i = 0; i < s_size; i++)
    {
        hash[s[i]]++;
    }
    
    for (int i = 0; i < t_size; i++)
    {
        hash[t[i]]--;

        if (hash[t[i]] < 0) {
            return false;
        }
    }

    return true;
}

int main() {
    string s, t;
    cin >> s >> t;

    cout << isAnagram(s, t) << endl;

    return 0;
}