#include <bits/stdc++.h>

using namespace std;

bool isAnagram(string s, string t) {
    if(s.size() != t.size()) {
        return false;
    }

    unordered_map<int, int> letters;
    for(int i = 0; i <= s.size(); i++) {
       letters[s[i]]++;
       letters[t[i]]--; 
    }

    for(auto kv : letters){
        if(kv.second != 0) {
            return false;
        }
    }
    return true;
}

int main() {
    cout << isAnagram("hello", "ohlel") << "\n";
    cout << isAnagram("hel", "llo") << "\n";
    cout << isAnagram("hel", "ehl") << "\n";

}