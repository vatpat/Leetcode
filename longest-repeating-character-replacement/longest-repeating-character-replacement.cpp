#include <bits/stdc++.h>

using namespace std;

int characterReplacement(string s, int k) {
    unordered_map<char, int> letterToCount;
    int i = 0;
    int j = 0;
    int result = 0;
    int maxCount = 0;
    while(j < s.size()) {
        letterToCount[s[j]]++;
        char maxChar;
        maxCount = max(maxCount, letterToCount[s[j]]);
        int windowLen = j - i + 1;
        if(windowLen - maxCount <= k) {
            result = max(result, j - i + 1);
            j++;
        } else {
            letterToCount[s[i]]--;
            i++;
        }
    }
    return result;
}

int main() {
    cout << characterReplacement("AABABBA", 1) << endl;
}