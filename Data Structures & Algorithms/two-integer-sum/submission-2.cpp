class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {

        vector<int> ans;
        unordered_map<int, int> mp;

        for(int i=0; i<nums.size(); i++)
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
                    mp[nums[i]] = i;
                    // mp.insert(make_pair(nums[i], i));
                }

            
        }

        return ans;
        
    }
};
