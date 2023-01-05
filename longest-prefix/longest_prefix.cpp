#include <bits/stdc++.h>

using namespace std;

string longestCommonPrefix(vector<string>& strs) {
    string prefix = "";
    for(int i = 0; i < strs[0].length(); i++) {
        char current = strs[0].at(i);
        for(int j = 1; j < strs.size(); j++) {
            if(i >= strs[j].size() || strs[j][i] != current) {
                return prefix;
            }
        }
        prefix += current;
    }
    return prefix;      
}

int main() {
    vector<string> i1 = {"", "hello", "here", ""};
    string r1 = longestCommonPrefix(i1);
    cout << r1 << "\n";
}