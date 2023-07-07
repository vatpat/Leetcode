#include <bits/stdc++.h>

using namespace std;

int search(vector<int>& nums, int target) {
    int left = 0;
    int right = nums.size() - 1;
    int middleIndex = right / 2;

    while(left < right) {
        if(nums[middleIndex] == target) {
            return middleIndex;
        } else if(nums[middleIndex] < target) {
            left = middleIndex + 1;
        } else {
            right = middleIndex - 1;
        }
        middleIndex = left + ((right - left) / 2);
    }

    return -1;
}

int main() {
    vector<int> in = {-1,0,3,5,9,12};
    int out = search(in, 9);
}