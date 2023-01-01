#include <bits/stdc++.h>

using namespace std;

bool containsDuplicate1(vector<int>& nums) {
    unordered_map<int, int> map;
    for(int i = 0; i < nums.size(); i++) {
        if(map.count(nums[i]) == 1) {
            return true;
        }
        map[nums[i]] = i;
    }
    return false;     
}

bool containsDuplicate2(vector<int>& nums) {
    unordered_map<int, int> map;
    for(int i = 0; i < nums.size(); i++) {
        unordered_map<int, int>::const_iterator iter = map.find(nums[i]);
        if(iter != map.end()) {
            return true;
        }
        map[nums[i]] = i;
    }
    return false;        
}

int main() {
    vector<int> test = {1, 2, 3, 1};
    bool r11 = containsDuplicate1(test);
    bool r12 = containsDuplicate2(test);
    cout << r11 << " " << r12 << "\n";

    vector<int> test2 = {1, 2, 3, 4};
    bool r21 = containsDuplicate1(test2);
    bool r22 = containsDuplicate2(test2);
    cout << r21 << " " << r22 << "\n";
}