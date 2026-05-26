class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {

        unordered_map<string, vector<string>> res;

        for(auto &x : strs)
        {
            string temp = x;
            sort(temp.begin(), temp.end());

            res[temp].push_back(x);
        }

        vector<vector<string>> ans;

        for (auto &pair : res)
        {
            ans.push_back(pair.second);
        }

        return ans;
    }
};
