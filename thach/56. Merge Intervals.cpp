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

vector<vector<int>> merge(vector<vector<int>> &intervals) {
    vector<vector<int>> res;
    sort(intervals.begin(), intervals.end(),
         [](const vector<int> &a, const vector<int> &b) -> bool {
             return a[0] < b[0];
         });

    for (auto interval : intervals) {
        if (res.size() == 0 || res.back()[1] < interval[0]) {
            res.push_back(interval);
        } else {
            res.back()[1] = max(interval[1], res.back()[1]);
        }
    }
    print(res);
    return res;
}

int main() {
    vector<vector<int>> a = {{1, 3}, {2, 6}, {8, 10}, {15, 18}};
    merge(a);
    return 0;
}