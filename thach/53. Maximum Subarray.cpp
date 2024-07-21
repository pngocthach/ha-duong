#include <bits/stdc++.h>
using namespace std;

int maxSubArray(vector<int> &a) {
    // tong lon nhat ket thuc tai i
    vector<int> maxSum(a.size());
    maxSum[0] = a[0];
    for (int i = 1; i < a.size(); i++) {
        maxSum[i] = max(a[i], a[i] + maxSum[i - 1]);
    }
    return *max_element(maxSum.begin(), maxSum.end());
}

int main() {
    vector<int> a = {-2, 1, -3, 4, -1, 2, 1, -5, 4};
    cout << maxSubArray(a);
}