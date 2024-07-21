#include <bits/stdc++.h>
using namespace std;

void merge(vector<int> &nums1, int m, vector<int> &nums2, int n) {
    if (n == 0) return;

    int swapIndex = m;
    int left = 0, right = 0;

    while (left < m && right < n) {
        if (nums1[left] < nums2[right]) {
            swap(nums1[swapIndex], nums1[left]);
            swapIndex = (swapIndex + 1) % (m + n);
            left++;
        } else {
            swap(nums1[swapIndex], nums2[right]);
            swapIndex = (swapIndex + 1) % (m + n);
            right++;
        }
    }
    while (left < m) {
        swap(nums1[swapIndex], nums1[left]);
        swapIndex = (swapIndex + 1) % (m + n);
        left++;
    }
    while (right < n) {
        swap(nums1[swapIndex], nums2[right]);
        swapIndex = (swapIndex + 1) % (m + n);
        right++;
    }

    for (int i = 0; i < n; i++) {
        nums2[i] = nums1[i + m];
    }
    for (int i = m - 1; i >= 0; i--) {
        nums1[i + n] = nums1[i];
    }
    for (int i = 0; i < n; i++) {
        nums1[i] = nums2[i];
    }
}

int main() {
    vector<int> nums1 = {1, 2, 4, 5, 6, 0};
    int m = 5;
    vector<int> nums2 = {3};
    int n = 1;

    merge(nums1, m, nums2, n);

    // Print the merged array
    for (int num : nums1) {
        cout << num << " ";
    }
    cout << endl;

    return 0;
}