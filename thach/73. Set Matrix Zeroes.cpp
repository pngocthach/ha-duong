#include <bits/stdc++.h>
using namespace std;

int ROW;
int COL;

void setZeroesCol(vector<vector<int>> &a, int index) {
    if (index != 0) {
        for (int i = 0; i < ROW; i++) {
            a[i][index] = 0;
        }
    }
}

void setZeroesRow(vector<vector<int>> &a, int index) {
    if (index != 0) {
        for (int i = 0; i < COL; i++) {
            a[index][i] = 0;
        }
    }
}

void setZeroes(vector<vector<int>> &a) {
    ROW = a.size();
    COL = a[0].size();

    int col0 = 1;
    for (int row = 0; row < ROW; row++) {
        for (int col = 0; col < COL; col++) {
            if (a[row][col] == 0) {
                if (row == 0) {
                    col0 = 0;
                } else {
                    a[row][0] = 0;
                }
                a[0][col] = 0;
            }
        }
    }

    for (int i = 1; i < COL; i++) {
        if (a[0][i] == 0) {
            setZeroesCol(a, i);
        }
    }
    for (int i = 0; i < ROW; i++) {
        if (a[i][0] == 0) {
            setZeroesRow(a, i);
        }
    }

    if (a[0][0] == 0) {
        for (int i = 0; i < ROW; i++) {
            a[i][0] = 0;
        }
    }

    if (col0 == 0) {
        for (int i = 0; i < COL; i++) {
            a[0][i] = 0;
        }
    }
}

int main() {
    vector<vector<int>> a = {{-4, -2147483648, 6, -7, 0},
                             {-8, 6, -8, -6, 0},
                             {2147483647, 2, -9, -6, -10}};
    setZeroes(a);
    for (auto i : a) {
        for (auto j : i) {
            cout << j << " ";
        }
        cout << endl;
    }
    return 0;
}