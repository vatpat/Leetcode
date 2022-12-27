#include <bits/stdc++.h>

using namespace std;

int main() {
    long long x = 123456789123456789LL;
    cout << "x:" << x << "\n";

    cout << "sizeof(short):" << sizeof(short) << "\n" << "sizeof(int):" << sizeof(int) << "\n" << "sizeof(long):" << sizeof(long) << "\n" << "sizeof(long long):" << sizeof(long long) << "\n";

    int a = 123456789;
    long long b = a*a;
    cout << "b: " << b << "\n"; // -1757895751, equivalent to (long long)(a*a)
    b = (long long)(a*a);
    cout << "b: " << b << "\n"; // fixed
}