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

        for(int i=0; i<k; i++)
        {
            ans.push_back(ans2[i].second);
        }

return ans;
    }
};
