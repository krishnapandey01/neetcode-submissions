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
            if (x == '[' || x == '(' || x == '{') {
                st.push(x);
            }
            else
            {
                if(st.empty())
                 return false;
                char temp = st.top();

                if(mp[x]!=temp)
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
