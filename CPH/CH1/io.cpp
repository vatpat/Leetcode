#include <bits/stdc++.h>

using namespace std;

int main() {
    // These lines make io more efficient
    //ios::sync_with_stdio(0); // disables the synchronization between the C and C++ standard streams, allows c++ streams to have their own independent buffers so don't mix c++ and c style I/O
    //cin.tie(0); // unties cin from cout. Tied streams ensure that one stream is flushed automatically before each I/O operation on the other stream
    
    cout << "Input and Output" << endl << "-----------------" << endl;
    
    // C++ Streams
    int a, b;
    string x;
    // must have space or newline between a, b, and x
    cin >> a >> b >> x;
    // newline works faster than endl because endl always causes flush operation
    cout << a << " " << b << " " << x << "\n";

    // C Style I/O
    int c, d;
    scanf("%d %d", &c, &d);
    printf("%d %d\n", c, d);

    // Reading whole line
    string s;
    getline(cin, s); // begins reading immediately after user input for scanf above
    cout << "Line: " << s << "\n";

    // Unknown amount of data
    //while (cin >> x) {
    //    // code
    //}

    // Using files: replace stdin and stdout streams
    //freopen("input.txt", "r", stdin);
    //freopen("output.txt", "w", stdout);
}