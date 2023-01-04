#include <bits/stdc++.h>

using namespace std;

bool isSubsequence(string s, string t) {
    if(s.length() == 0) {
        return true;
    }
    if(s.length() > t.length()) {
        return false;
    }        
    else {
        int s_ind = 0;
        for(int i = 0; i < t.length(); i++) {
            if(s.at(s_ind) == t.at(i)) {
                s_ind++;
            }
            if(s_ind == s.length()) {
                return true;
            }
        }
        return false;
    }
}

int main() {
    bool r1 = isSubsequence("a", "abc");
    cout << r1 << "\n";
    bool r2 = isSubsequence("abc", "cba");
    cout << r2 << "\n";
    bool r3 = isSubsequence("abc", "aebfc");
    cout << r3 << "\n";
}