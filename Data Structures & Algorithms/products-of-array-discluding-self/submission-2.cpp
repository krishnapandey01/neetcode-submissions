class Solution {
   public:
    vector<int> productExceptSelf(vector<int>& nums) {
        vector<int> res(nums.size());
        // int total = 1;

        int cz = 0;
        for (auto& x : nums) {
            if (x == 0) {
                cz++;
                if (cz >=2) break;
            }
        }
        
        if (cz > 1) {
            return vector<int>(nums.size(), 0);
        }

        // for (auto& x : nums) {
        //     if (cz == 1 && x != 0) {
        //         res.push_back(0);
        //     } else if (cz == 1 && x == 0) {
        //         res.push_back(total);
        //     } else {
        //         res.push_back(total / x);
        //     }
        // }

       
        int n = nums.size();
        vector<int> pref(n);
        vector<int> suf(n);
        pref[0]=1;
        suf[n-1]=1;

        for(int i=1; i<n; i++)
        {
            pref[i] = pref[i-1]*nums[i-1];
        }

        for(int i=n-2; i>=0; i--)
        {
            suf[i] = suf[i+1]*nums[i+1];
        }

        for (int i=0; i<n; i++)
        {
            res[i] = pref[i]*suf[i];
        }

        return res;
    }
};
