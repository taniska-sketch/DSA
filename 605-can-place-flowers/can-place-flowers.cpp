class Solution {
public:
    bool canPlaceFlowers(vector<int>& flowerbed, int n) {
if(n == 0)
    return true;
        for(int i = 0; i < flowerbed.size(); i++) {

            if(flowerbed[i] == 1)
                continue;

            // left check
            if(i > 0 && flowerbed[i-1] == 1)
                continue;

            // right check
            if(i < flowerbed.size()-1 && flowerbed[i+1] == 1)
                continue;

            // Ab flower laga sakte hain
            flowerbed[i] = 1;
            n--;

            if(n == 0)
                return true;
        }

        return false;
    }
};