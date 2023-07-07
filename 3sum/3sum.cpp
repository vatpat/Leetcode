#include <bits/stdc++.h>

using namespace std;

vector<vector<int>> threeSum(vector<int>& nums) {
    unordered_map<int, vector<int>> numToIndices;
    set<vector<int>> triplets;

    for(int i = 0; i < nums.size(); i++) {
        numToIndices[nums[i]].push_back(i);
    }

    for(int i = 0; i < nums.size() - 1; i++) {
        for(int j = i + 1; j < nums.size(); j++) {
            int thirdVal = 0 - nums[i] - nums[j];
            if(numToIndices[thirdVal].size() != 0) {
                for(int index : numToIndices[thirdVal]) {
                    vector<int> triplet = {nums[i], nums[j], thirdVal};
                    sort(triplet.begin(), triplet.end());
                    triplets.insert(triplet);
                }
            }
        }
    }

    vector<vector<int>> sol;
    for(auto s : triplets) {
        sol.push_back(s);
    }

    return sol;
}

int main() {
    vector<int> in = {-1,0,1,2,-1,-4};
    vector<vector<int>> sol = threeSum(in);
}