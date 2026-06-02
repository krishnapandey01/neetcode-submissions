class Solution {
   public:
    bool isValid(string s) {
        if (s.size() % 2 == 1) {
            return false;
        }

        stack<char> st;

        for (char &x : s) {
            if (x == '[' || x == '(' || x == '{') {
                st.push(x);
                cout<< x;
            }
            else
            {
                if(st.empty())
                 return false;
                char temp = st.top();

                if(!((temp == '[') && (x==']') || (temp == '(' ) && (x==')') || (temp == '{') && (x=='}')))
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
