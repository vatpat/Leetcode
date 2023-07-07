#include <bits/stdc++.h>

using namespace std;

bool isPalindrome(string s) {
    const int lowNum = '0';
    const int highNum = '9';
    const int lowChar = 'a';
    const int highChar = 'z';
    
    int i = 0;
    int j = s.length() - 1;
    while(i < j) {
        char left = tolower(s[i]);
        char right = tolower(s[j]);

        if(!(left > '0' && left < '9') && !(left > 'a' && left < 'z')) {
            i++;
            continue;
        }
        
        if(!(right > '0' && right < '9') && !(right > 'a' && right < 'z')) {
            j--;
            continue;
        }

        if(left != right) {
            return false;
        } else {
            i++;
            j--;
        }
    }
    return true;
}

int main() {
    string a = "A man, a plan, a canal: Panama";
    bool out = isPalindrome(a);
    cout << out << endl;
    return 0;
}