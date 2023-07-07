#include <bits/stdc++.h>

using namespace std;

vector<int> productExceptSelf(vector<int>& nums) {
    unordered_map<int, int> prefix;
    prefix[0] = 1;
    for(int i = 1; i < nums.size(); i++) {
        prefix[i] = prefix[i-1] * nums[i-1];
    }

    unordered_map<int, int> suffix;
    suffix[nums.size() - 1] = 1;
    for(int i = nums.size() - 2; i >= 0; i--) {
        suffix[i] = suffix[i+1] * nums[i+1];
    }

    vector<int> products(nums.size());
    for(int i = 0; i < nums.size(); i++){
        products[i] = prefix[i] * suffix[i];
    }

    return products;
}

int main() {
    vector<int> in = {1,2,3,4};
    vector<int> sol = productExceptSelf(in);
}