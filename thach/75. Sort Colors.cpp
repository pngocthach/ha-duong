#include <bits/stdc++.h>
using namespace std;

void sortColors(vector<int> &a) {
    int low = 0, mid = 0, high = a.size() - 1;
    while (mid <= high) {
        if (a[mid] == 0) {
            swap(a[mid], a[low]);
            mid++;
            low++;
        } else if (a[mid] == 1) mid++;
        else if (a[mid] == 2) {
            swap(a[mid], a[high]);
            high--;
        }
    }
}

int main() {
    vector<int> a = {2, 0, 2, 0, 1, 0};
    sortColors(a);
    for (auto i : a) {
        cout << i << " ";
    }
}