#include <bits/stdc++.h>

using namespace std;

vector<int> replaceElements(vector<int>& arr) {
    int maxRight = arr[arr.size() - 1];
    arr[arr.size() - 1] = -1;
    for(int i = arr.size() - 2; i >= 0; i--) {
        int current = arr[i];
        arr[i] = maxRight;
        if(current > maxRight) {
            maxRight = current;
        }
    }
    return arr;        
}

int main() {
    vector<int> t1 = {17,18,5,4,6,1};
    vector<int> r1 = replaceElements(t1);
    for(int i = 0; i < r1.size(); i++) {
        cout << r1[i] << " ";
    }
    cout << "\n";
}