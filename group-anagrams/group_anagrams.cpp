#include <bits/stdc++.h>

using namespace std;

vector<vector<string>> groupAnagrams(vector<string>& strs) {
    vector<vector<string>> groups;
    unordered_map<string, vector<string>> mp;
    for(int i = 0; i < strs.size(); i++) {
        string current = strs[i];
        sort(current.begin(), current.end());
        mp[current].push_back(strs[i]);
    }
    for(auto it : mp)  {
        groups.push_back(it.second);
    }
    return groups;
}

void printStrings(vector<vector<string>>& strs) {
    for(int i = 0; i < strs.size() ; i++) {
        for(int j = 0; j < strs[i].size(); j++) {
            cout << strs[i][j] << " ";
        }
        cout << "|  ";
    }
    cout << "\n";
}

int main() {
    vector<string> i1 = {"hello", "hi", "ih", "elloh", "else"};
    vector<vector<string>> r1 = groupAnagrams(i1);
    printStrings(r1);

    vector<string> i2 = {"eat","tea","tan","ate","nat","bat"};
    vector<vector<string>> r2 = groupAnagrams(i2);
    printStrings(r2);

    vector<string> i3 = {""};
    vector<vector<string>> r3 = groupAnagrams(i3);
    printStrings(r3);

    vector<string> i4 = {"a"};
    vector<vector<string>> r4 = groupAnagrams(i4);
    printStrings(r4);
}
