class Solution {
   public:
    bool canPlaceFlowers(vector<int>& flowerbed, int n) {
        int s = flowerbed.size();
        if(s==1 && flowerbed[0] == 0)
        {
            n--;
        }

        if (s>=2 && flowerbed[0] == 0 && flowerbed[1] == 0) {
            n--;
        }

        if (s>=2 && flowerbed[s - 1] == 0 && flowerbed[s - 2] == 0) {
            n--;
        }

        for (int i = 2; i < s - 2; i++) {
            if (flowerbed[i - 1] == 0 && flowerbed[i] == 0 && flowerbed[i + 1] == 0) {
                i++;
                n--;
            }
        }
        if (n <= 0) return true;
        return false;
    }
};