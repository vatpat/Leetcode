#include <bits/stdc++.h>

using namespace std;

vector<int> twoSum(vector<int>& nums, int target) {
    unordered_map<int, int> map;
    vector<int> ans;
    for(int i = 0; i < nums.size(); i++) {
        int diff = target - nums[i];
        unordered_map<int, int>::const_iterator index = map.find(diff);
        if(index != map.end()) {
            ans.push_back(index->second);
            ans.push_back(i);
            return ans;
        }
        map[nums[i]] = i;
    }
    return ans;
}

int main() {
    vector<int> a1;
    a1.push_back(2);
    a1.push_back(7);
    a1.push_back(11);
    a1.push_back(15);
    int t1 = 9;
    vector<int> r1 = twoSum(a1, t1);
    cout << r1[0] << " " << r1[1] << "\n";
}