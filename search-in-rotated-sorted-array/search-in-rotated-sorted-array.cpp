#include <bits/stdc++.h>

using namespace std;

int search(vector<int>& nums, int target) {
    int left = 0;
    int right = nums.size() - 1;
    while(left <= right) {
        int middle = left + ((right - left) / 2);
        int difference = nums[right] - nums[middle];
        if(nums[middle] == target) {
            return middle;
        } else if(difference < 0) {
            if (target <= nums[right]) {
                left = middle + 1;
            } else {
                right = middle;
            }
        } else if(difference > 0) {
            if(target < nums[middle] || target > nums[right]) {
                right = middle - 1;
            } else {
                left = middle + 1;
            }
        } else {
            return -1;
        }
    }

    return -1;
}

int main() {
    vector<int> in = {5,1,3};
    int out = search(in, 5);
    cout << out << endl;
}