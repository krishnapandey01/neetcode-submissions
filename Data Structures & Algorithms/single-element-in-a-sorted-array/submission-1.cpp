class Solution {
public:
    int singleNonDuplicate(vector<int>& nums) {

        int l=0, r=nums.size()-1, mid;
        cout<< l<<" "<< r << " ";

        while(l<=r)
        {
            mid = l + (r-l)/2;

            // Check boundaries explicitly before looking left or right
            bool leftCheck = (mid == 0 || nums[mid] != nums[mid - 1]);
            bool rightCheck = (mid == nums.size() - 1 || nums[mid] != nums[mid + 1]);

            if (leftCheck && rightCheck) {
                return nums[mid];
            }

            if ((mid % 2 == 0 && mid + 1 < nums.size() && nums[mid] == nums[mid + 1]) ||
                (mid % 2 != 0 && mid - 1 >= 0 && nums[mid] == nums[mid - 1])) {
                l = mid + 1; // Single element is on the right side
            } else {
                r = mid - 1; // Single element is on the left side
            }
        }
        
        return -1;
    }
};