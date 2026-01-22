class Solution {
public:
    int minimumPairRemoval(vector<int>& nums) {

        int operations = 0;

        // Keep doing operations until the array becomes non-decreasing
        while (true) {

            bool isSorted = true;

            // Check if the array is already non-decreasing
            for (int i = 1; i < (int)(nums.size()); i++) {

                if (nums[i] < nums[i - 1]) {
                    isSorted = false;
                    break;
                }
            }

            // If already sorted, no more operations needed
            if (isSorted == true) {
                break;
            }

            // Find the leftmost adjacent pair with minimum sum
            int minIndex = 0;
            int minSum = (nums[0] + nums[1]);

            for (int i = 1; i < (int)(nums.size() - 1); i++) {

                int currentSum = (nums[i] + nums[i + 1]);

                if (currentSum < minSum) {
                    minSum = currentSum;
                    minIndex = i;
                }
            }

            // Replace the selected pair with their sum
            nums[minIndex] = (nums[minIndex] + nums[minIndex + 1]);

            // Shift elements left to remove the second element of the pair
            for (int i = (minIndex + 1); i < (int)(nums.size() - 1); i++) {
                nums[i] = nums[i + 1];
            }

            // Remove the duplicate last element
            nums.pop_back();

            // One operation completed
            operations++;
        }

        return operations;
    }
};
