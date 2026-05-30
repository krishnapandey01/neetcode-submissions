class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {

        unordered_set<int> s;

        for(int &x: nums)
        {
            if(!s.count(x))
              s.insert(x);
            else
            return true;
        }
        return false;
        
    }
};