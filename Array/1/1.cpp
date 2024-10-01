//
// Created by 16679 on 2024/10/1.
//
#include<bits/stdc++.h>
using namespace std;


vector<int> solve(vector<int> &nums) {
    vector<int> ans;
    for (int i = 0; i < nums.size(); ++i) {
        int temp = 0;
        for (int j = 0; j < i; ++j) {
            if (nums[i] > nums[j]) temp++;
        }
        ans.push_back(temp);
    }

    return ans;
}


int main() {

    int n;
    cin >> n;

    vector<int> nums(n);
    for (int i = 0; i < n; ++i) cin >> nums[i];

    auto ans = solve(nums);
    for (const auto& num: ans) cout << num << " ";
    cout << endl;

    return 0;
}