class Solution {
   public:
    vector<int> productExceptSelf(vector<int>& nums) {
        vector<int> res;
        int total = 1;

        int cz = 0;
        for (auto& x : nums) {
            if (x == 0) {
                cz++;
            } else
                total *= x;
        }
         if (cz > 1) {
                return vector<int>(nums.size(), 0);
            }

        for (auto& x : nums) {
            if (cz == 1 && x != 0) {
                res.push_back(0);
            } else if (cz == 1 && x == 0) {
                res.push_back(total);
            } else {
                res.push_back(total / x);
            }
        }
        return res;
    }
};
