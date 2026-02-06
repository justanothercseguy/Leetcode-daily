class Solution {
public:
    string reverseWords(string s) {

        vector<string> arr;   // to store words
        string temp = "";

        // Step 1: split words manually
        for(int i = 0; i < s.length(); i++) {

            if(s[i] != ' ') {
                temp += s[i];     // build word
            }
            else if(temp != "") {
                arr.push_back(temp);  // store word when space comes
                temp = "";
            }
        }

        // store last word if exists
        if(temp != "") arr.push_back(temp);

        // Step 2: reverse word order
        reverse(arr.begin(), arr.end());

        // Step 3: build answer string
        string ans = "";
        for(int i = 0; i < arr.size(); i++) {
            ans += arr[i];
            if(i != arr.size() - 1)
                ans += " ";
        }

        return ans;
    }
};
