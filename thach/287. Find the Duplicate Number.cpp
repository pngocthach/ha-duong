#include <bits/stdc++.h>
using namespace std;

int findDuplicate(vector<int> &nums) {
    int fast = nums[0], slow = nums[0];
    do {
        slow = nums[slow];
        fast = nums[nums[fast]];
    } while (slow != fast);

    slow = nums[0];
    while (fast != slow) {
        slow = nums[slow];
        fast = nums[fast];
    }

    return slow;
}

int main() {
    vector<int> nums = {1, 3, 4, 2, 2};
    int result = findDuplicate(nums);
    cout << "Duplicate number: " << result << endl;
}