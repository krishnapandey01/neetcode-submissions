class Solution {
public:

    int binary_search(int l, int r, vector<int>&nums, int target)
    {
        int mid = (l+r)/2;

        if(nums[mid]==target)
        {
            return mid;
        }

        if(l>r)
        return -1;

        if(nums[mid]>target)
        {
            r = mid-1;
        }
        else
        {
            l = mid+1;
        }


        return binary_search(l, r, nums, target);
        
    }


    int search(vector<int>& nums, int target) {

        return binary_search(0, nums.size() - 1, nums, target);
                
    }
};
