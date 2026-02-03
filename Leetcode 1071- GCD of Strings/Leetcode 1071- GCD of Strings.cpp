class Solution {
public:
    string gcdOfStrings(string str1, string str2) {

        int length1 = str1.length();
        int length2 = str2.length();

        // Step 1: Check if both strings follow the same repeating pattern
        // If not, no GCD string is possible
        if (str1 + str2 != str2 + str1) {
            return "";
        }

        // Step 2: Find GCD of the lengths
        int g = findGCD(length1, length2);

        // Step 3: The answer is the first 'g' characters
        return str1.substr(0, g);
    }

    int findGCD(int a, int b) {
        while (b != 0) {
            int remainder = a % b;
            a = b;
            b = remainder;
        }
        return a;
    }
};
