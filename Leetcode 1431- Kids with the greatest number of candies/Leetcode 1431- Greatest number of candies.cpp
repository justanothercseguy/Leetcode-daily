class Solution {
public:
    vector<bool> kidsWithCandies(vector<int>& candies, int extraCandies) {

        int mx = 0;

        // Step 1: find maximum candies
        for(int i = 0; i < candies.size(); i++){
            mx = max(mx, candies[i]);
        }

        vector<bool> result;

        // Step 2: compare each kid with maximum
        for(int i = 0; i < candies.size(); i++){
            if(candies[i] + extraCandies >= mx){
                result.push_back(true);
            } else {
                result.push_back(false);
            }
        }

        return result;
    }
};
