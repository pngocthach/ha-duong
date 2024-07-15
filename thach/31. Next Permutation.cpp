#include <bits/stdc++.h>
using namespace std;

void nextPermutation(vector<int> &a) {
    // 1. Tim vi tri ma bat dau can thay doi
    int pos;
    for (pos = a.size() - 2; pos >= 0; pos--) {
        if (a[pos + 1] > a[pos]) {
            cout << a[pos] << endl;
            break;
        }
    }
    if (pos == -1) {
        reverse(a.begin(), a.end());
        return;
    }

    // 2. swap vi tri day voi so be nhat o ben phai
    for (int i = a.size() - 1; i > pos; i--) {
        if (a[i] > a[pos]) {
            cout << a[i] << endl;
            swap(a[i], a[pos]);
            for (auto i : a) {
                cout << i << " ";
            }
            cout << endl;
            break;
        }
    }

    // 3. xep lai thu tu tu be den lon
    reverse(a.begin() + pos + 1, a.end());
}

int main() {
    vector<int> a = {3, 2, 1};
    nextPermutation(a);
    for (auto i : a) {
        cout << i << " ";
    }
}