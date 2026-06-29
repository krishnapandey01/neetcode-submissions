class Solution {
   public:
    int searchInsert(vector<int>& nums, int target) {
        int l = 0, r = nums.size() - 1, mid, res = nums.size();

        while (l <= r) {
            mid = l + (r - l) / 2;

            if (nums[mid] == target) return mid;

            if (nums[mid] < target) {
                l = mid + 1;
            } else
            {
                r = mid - 1;
                res = mid;

            }
        }

        return res;
    }
};