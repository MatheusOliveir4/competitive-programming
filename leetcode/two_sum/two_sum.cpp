#include <bits/stdc++.h>
using namespace std;

vector<int> twoSum(vector<int>& nums, int target) {
    int i;
    int n = nums.size();
    unordered_map<int, int> hash;
    vector<int> vec;

    for (i = 0; i < n; i++)
    {
        int diff = target - nums[i];

        if (hash.find(diff) != hash.end()) {
            vec.push_back(hash[diff]);
            vec.push_back(i);
            break;
        }

        hash[nums[i]] = i;
    }
    
    return vec;
}

int main() {
    vector<int> nums;
    int n, t, i;

    cin >> n;

    for (i = 0; i < n; i++) {
        int x;
        cin >> x;
        nums.push_back(x);
    }

    cin >> t;

    vector<int> result = twoSum(nums, t);

    for (i = 0; i < 2; i++)
    {
        cout << result[i] << " ";
    }
    
    return 0;
}