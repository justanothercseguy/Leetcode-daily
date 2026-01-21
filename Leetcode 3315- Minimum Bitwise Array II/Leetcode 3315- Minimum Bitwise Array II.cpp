class Solution {
public:
    vector<int> minBitwiseArray(vector<int>& nums) {
        vector<int> ans(nums.size());

        for (int i = 0; i < nums.size(); i++) {
            int n = nums[i];

            // x | (x + 1) is always odd
            // so even numbers can never be formed
            if (n % 2 == 0) {
                ans[i] = -1;
                continue;
            }

            // count number of trailing 1s in n and stops when it sees a zero
            int temp = n;
            int trailingOnes = 0;

            while (temp & 1) {
                trailingOnes++;
                temp >>= 1;
            }

            // remove the highest bit among trailing 1s, that exact 1 which gives us the best/minimum value
            ans[i] = n - (1 << (trailingOnes - 1));
        }

        return ans;
    }
};