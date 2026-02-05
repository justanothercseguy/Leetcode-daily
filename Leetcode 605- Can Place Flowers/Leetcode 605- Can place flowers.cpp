class Solution {
public:
    bool canPlaceFlowers(vector<int>& flowerbed, int n) {
        int size = flowerbed.size();

        for(int i = 0; i < size; i++) {

            // check if current spot is empty
            if(flowerbed[i] == 0) {

                // check left and right
                bool leftEmpty = (i == 0 || flowerbed[i - 1] == 0);
                bool rightEmpty = (i == size - 1 || flowerbed[i + 1] == 0);

                if(leftEmpty && rightEmpty) {
                    flowerbed[i] = 1;   // plant flower
                    n--;

                    if(n == 0)
                        return true;
                }
            }
        }

        return n <= 0;
    }
};
