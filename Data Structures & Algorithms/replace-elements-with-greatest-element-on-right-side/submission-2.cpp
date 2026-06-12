class Solution {
   public:
    vector<int> replaceElements(vector<int>& arr) {
        int n = arr.size();
        vector<int> res(n);
        int m = arr[n - 1];
        res[n - 1] = -1;

        for (int i = n-2; i >=0; i--) {
            res[i] = m;
            m = max(arr[i], m);
        }
        return res;
    }
};