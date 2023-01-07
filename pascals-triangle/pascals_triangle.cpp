#include <bits/stdc++.h>

using namespace std;

vector<vector<int>> generate(int numRows) {
    vector<vector<int>> rows = {{1}};
    for(int i = 1; i < numRows; i++) {
        vector<int> prevRow = rows[i-1];
        vector<int> current;
        current.push_back(1);
        for(int j = 0; j < prevRow.size() - 1; j++) {
            current.push_back(prevRow[j] + prevRow[j+1]);
        }
        current.push_back(1);
        rows.push_back(current);
    }
    return rows;
}

void printVector(vector<vector<int>> rows) {
    for(int i = 0; i < rows.size(); i++) {
        for(int j = 0; j < rows[i].size(); j++) {
            cout << rows[i][j] << " ";
        }
        cout << "\n";
    }
    cout << "--------------------" << "\n";
}

int main() {
    auto r1 = generate(1);
    auto r2 = generate(2);
    auto r3 = generate(3);
    auto r4 = generate(4);
    printVector(r1);
    printVector(r2);
    printVector(r3);
    printVector(r4);
}

