class Solution {
   public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        vector<int> res;
        // int j= numbers.size()/2;
        int n = numbers.size();

        // for(int i=0; i<n; i++)
        // {
        //     int l1 = numbers[i]+numbers[j];
        //     int l2 = numbers[j] + numbers[n];

        //     if(abs(target-l1)>abs(target-l2))
        //     {

        //     }

        // }
        int j = n - 1;

        for (int i = 0; i < n; i++) {
            if ((numbers[i] + numbers[j]) == target) {
                res.push_back(i+1);
                res.push_back(j+1);

                return res;
            }
            else if((numbers[i] + numbers[j]) > target) 
            {
                j--;
                i--;

            }
            
            }

            return res;
    }
};
