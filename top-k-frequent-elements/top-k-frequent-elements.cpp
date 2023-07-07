#include <bits/stdc++.h>

using namespace std;

vector<int> topKFrequent(vector<int>& nums, int k) {
    unordered_map<int,int> numToCount;
    for(int i = 0; i < nums.size(); i++) {
        numToCount[nums[i]]++;
    }

    vector<vector<int>> countToNum(nums.size()+1);
    for(auto kv : numToCount) {
        countToNum[kv.second].push_back(kv.first);
    }
    
    vector<int> solution;
    for(int i = nums.size(); i >= 0; i--) {
        if(countToNum[i].size() != 0) {
            solution.insert(solution.end(), countToNum[i].begin(), countToNum[i].end());
        }
        if(solution.size() == k) {
            return solution;
        }
    }
    return solution;
}

int main() {
    vector<int> in = {1,1,1,2,2,3};
    vector<int> sol = topKFrequent(in, 2);
}