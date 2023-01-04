#include <bits/stdc++.h>

using namespace std;

int lengthOfLastWord(string s) {
    int last = s.length() - 1;
    while(last >= 0 && s[last] == ' ') {
        last--;
    }
    int count = 0;
    while(last >= 0 && s[last] != ' ') {
        last--;
        count++;
    }
    return count;
}

int main() {
    int r1 = lengthOfLastWord("hello");
    cout << r1 << "\n";
    int r2 = lengthOfLastWord("hello worlda");
    cout << r2 << "\n";
    int r3 = lengthOfLastWord("hello here worldab");
    cout << r3 << "\n";
    int r4 = lengthOfLastWord("hello here a");
    cout << r4 << "\n";
    int r5 = lengthOfLastWord("   fly me   to   the moon  ");
    cout << r5 << "\n";
}