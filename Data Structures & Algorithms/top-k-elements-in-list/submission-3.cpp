class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {

        unordered_map<int, int> res;

        for(auto &ans: nums)
        {
            res[ans]++;
        }

        vector<int> ans;

        vector<pair<int, int>> ans2;
        for(auto &pair:res)
        {
            ans2.push_back(make_pair(pair.second, pair.first));
        }



    sort(ans2.begin(), ans2.end());
    reverse(ans2.begin(), ans2.end());
int k1=0;
        for(auto &pair:ans2)
        {
            if(k1<k)
           {
            k1++;
             ans.push_back(pair.second);
        }
        }

return ans;
    }
};
