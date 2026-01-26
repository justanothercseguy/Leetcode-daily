class Solution {
public:
    vector<vector<int>> minimumAbsDifference(vector<int>& arr) {

        // Get the number of elements in the array
        int n = arr.size();

        // This will store all pairs that have the minimum absolute difference
        vector<vector<int>> result;

        // Sort the array so that minimum differences appear between adjacent elements
        sort(arr.begin(), arr.end());

        // Initialize minimum difference with a very large value
        int minDiff = INT_MAX;

        // Traverse the sorted array and compare adjacent elements
        for (int i = 1; i < n; i++) {

            // Calculate the difference between current and previous element
            int diff = arr[i] - arr[i - 1];

            // If a smaller difference is found, update minDiff
            // and clear previous pairs since they are no longer valid
            if (diff < minDiff) {
                minDiff = diff;
                result.clear();
                result.push_back({arr[i - 1], arr[i]});
            }
            // If the difference is equal to the minimum found so far,
            // add this pair to the result
            else if (diff == minDiff) {
                result.push_back({arr[i - 1], arr[i]});
            }
        }

        // Return all pairs with the minimum absolute difference
        return result;
    }
};
