class Solution {
   public:
    int longestConsecutive(vector<int>& nums) {

        if(nums.empty())
         return 0;
        priority_queue<int> pq;
        int count = 1;
        sort(nums.begin(), nums.end());

        for (int i = 0; i < (nums.size() - 1); i++) {
            if(nums[i]==nums[i+1])
               continue;
            if (nums[i] == (nums[i + 1] - 1)) {
                count++;
            } else {
                pq.push(count);
                count = 1;
            }
        }

        pq.push(count);
        return pq.top();
    }
};
