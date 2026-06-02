class Solution {
   public:
    bool isValid(string s) {
        if (s.size() % 2 == 1) {
            return false;
        }

        unordered_map<char, char> mp;
        mp.insert(make_pair('}','{'));
        mp.insert(make_pair(']','['));
        mp.insert(make_pair(')','('));
        stack<char> st;

        for (char &x : s) {
            if (mp.find(x)==mp.end()) {
                st.push(x);
            }
            else
            {
                if(st.empty() || mp[x]!=st.top())
                  return false;
                st.pop();
            }
        }

        if(st.empty())
        return true;
        else
        return false;
    }
};
