class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {

        vector<int> ans;
        int n = nums.size();
        unordered_map<int, int> mp;

        for(int i=0; i<n; i++)
        {
            int temp = target - nums[i];
            
                if (mp.contains(temp))
                {
                    ans.push_back(mp[temp]);
                    ans.push_back(i);
                    return ans;
                }
                else
                {
                    // mp[temp] = i;
                    mp.insert(make_pair(nums[i], i));
                }

            
        }

        return ans;
        
    }
};
