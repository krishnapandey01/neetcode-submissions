class Solution {
public:
    int search(vector<int>& nums, int target) {

        int n = nums.size();
        int mid = n/2; 


        for(int i=0; i<n; i++)
        {
            if(nums[i]==target)
             return i;
            else if(nums[mid]>target)
            {
                mid = mid/2;
            }
            else
            {
                mid = mid + mid/2;
            }

        }

        return -1;
        
    }
};
