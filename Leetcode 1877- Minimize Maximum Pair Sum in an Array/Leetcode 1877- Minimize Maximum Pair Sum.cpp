class Solution {
public:
    int minPairSum(vector<int>& nums) {
        //uses introsort: quick+heap+insertion sort
        sort(nums.begin(), nums.end());
        //two pointers one at the start and another at the end
        int i = 0;
        int j = nums.size() - 1;
        int ans = 0;
        //after the sort adding up the pairs and finding the max
        while (i < j) {
            ans = max(ans, nums[i] + nums[j]);
            i++;
            j--;
        }
        
        return ans;
    }
};
