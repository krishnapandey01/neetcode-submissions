class Solution {
   public:
    int longestConsecutive(vector<int>& nums) {
        unordered_map<int, int> left, right;
        for (auto x : nums) {
            int l = left.count(x) ? left[x] : x;
            int r = right.count(x) ? right[x] : x;
            if (left.count(x - 1)) {
                l = left[x - 1];
                left.erase(x - 1);
            }
            if (right.count(x + 1)) {
                r = right[x + 1];
                right.erase(x + 1);
            }
            left[r] = l;
            right[l] = r;
        }

        int max_len = 0;
        for (auto [l, r] : right) {
            cout << l << " " << r << "\n";

            max_len = max(max_len, r - l + 1);
        }
        return max_len;
    }
};
