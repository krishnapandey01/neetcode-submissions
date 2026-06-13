class Solution {
   public:
    vector<int> dailyTemperatures(vector<int>& temperatures) {
        stack<pair<int, int>> st;

        int n = temperatures.size();
        vector<int> res(n);

        for (int i = n - 1; i >= 0; i--) {
            // if (!st.empty() && (st.top().first) > temperatures[i]) {
                
            //     res[i] = st.top().second-i;
            //     st.push(make_pair(temperatures[i], i));
            // } else {
                while (!st.empty() && (st.top().first) <= temperatures[i]) {
                    st.pop();
                }
                if (st.empty()) {
                    st.push(make_pair(temperatures[i], i));
                    res[i] = 0;
                } else {
                    res[i] = st.top().second- i;
                    st.push(make_pair(temperatures[i], i));
                // }
            }
        }

        return res;
    }
};
