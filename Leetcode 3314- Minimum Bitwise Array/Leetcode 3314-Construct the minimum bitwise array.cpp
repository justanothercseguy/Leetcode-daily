class Solution {
public:
    vector<int> minBitwiseArray(vector<int>& nums) {
        vector<int> ans(nums.size());

        // go through each number in nums
        for (int i = 0; i < nums.size(); i++) {

            int n = nums[i];
            ans[i] = -1;   // default value if no answer is found

            // try all possible x starting from 0
            // the first x that satisfies the condition will be the minimum
            for (int x = 0; x <= n; x++) {

                // check if x OR (x + 1) equals the given number
                if ( (x | (x + 1)) == n ) {
                    ans[i] = x;   // found the smallest valid x
                    break;        // stop searching for this number
                }
            }
        }

        return ans;  // return the final result array
    }
};
