#include <bits/stdc++.h>
using namespace std;

vector<int> nextLine(vector<int> &a) {
    vector<int> res;
    res.push_back(a[0]);
    for (int i = 1; i < a.size(); i++) {
        res.push_back(a[i - 1] + a[i]);
    }
    res.push_back(a[a.size() - 1]);
    return res;
}

vector<vector<int>> generate(int numRows) {
    vector<vector<int>> res;
    res.push_back(vector<int>{1});

    if (numRows == 1) return res;

    for (int i = 2; i <= numRows; i++) {
        res.push_back(nextLine(res[res.size() - 1]));
    }
    return res;
}

int main() {
    auto a = generate(20);
    for (auto i : a) {
        for (auto j : i) {
            cout << j << " ";
        }
        cout << endl;
    }
}