class Solution {

public:

    int maxSubArray(vector<int>& nums) {

        int n = nums.size();

        if(n == 1) {

            return nums[n - 1];

        }

        vector<int> prf(n + 1, 0);

        for(int i = 1; i <= n; i++) {

            prf[i] = prf[i - 1] + nums[i - 1];

        }

        int max_sub_sum = prf[1];

        int min_prf = prf[0];

        for(int i = 1; i <= n; i++) {

            max_sub_sum = max(max_sub_sum, prf[i] - min_prf);

            min_prf = min(min_prf, prf[i]);

        }

        return max_sub_sum;

    }

};
