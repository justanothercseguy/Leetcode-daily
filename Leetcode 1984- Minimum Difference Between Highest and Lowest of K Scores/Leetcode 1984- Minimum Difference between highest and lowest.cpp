class Solution {
public:
    int minimumDifference(vector<int>& nums, int k) {

        // If we pick only 1 student, max score = min score
        // So the difference will always be 0
        if (k == 1) {
            return 0;
        }

        // Sort the scores so that close values come next to each other
        sort(nums.begin(), nums.end());

        // Store the minimum difference found so far
        int ans = INT_MAX;

        // Slide a window of size k across the sorted array
        for (int i = 0; i + k - 1 < nums.size(); i++) {

            // Difference between highest and lowest score
            // in the current group of k students
            int diff = nums[i + k - 1] - nums[i];

            // Update the minimum difference
            ans = min(ans, diff);
        }

        // Return the smallest difference found
        return ans;
    }
};
