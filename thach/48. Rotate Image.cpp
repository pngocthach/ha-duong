#include <bits/stdc++.h>
using namespace std;

void print(vector<vector<int>> &a) {
    for (auto i : a) {
        for (auto j : i) {
            cout << j << " ";
        }
        cout << endl;
    }
}

void rotate(vector<vector<int>> &a) {
    // 1. giu nguyen duong cheo nhung doi vi tri
    for (int i = 0; i < a.size(); i++) {
        for (int j = i + 1; j < a.size(); j++) {
            swap(a[i][j], a[j][i]);
        }
    }
    print(a);
    // 2. reverse tung hang 1
    for (int i = 0; i < a.size(); i++) {
        reverse(a[i].begin(), a[i].end());
    }
    print(a);
}

int main() {
    vector<vector<int>> a = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
    rotate(a);
    return 0;
}