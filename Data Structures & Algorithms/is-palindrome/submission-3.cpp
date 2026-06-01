class Solution {
   public:
    bool isPalindrome(string s) {

        for (auto it = s.begin(); it != s.end();) {
            if (!((*it >= '0' && *it <= '9') || (*it >= 'A' && *it <= 'Z') ||
                  (*it >= 'a' && *it <= 'z'))) {
                it = s.erase(it);  // erase returns next valid iterator
            } else {
               
                if(*it>='A'&& *it<='Z')
                  *it+= 32;
                 ++it;
            }
        }

        int j = s.size()-1;

        for (int i = 0; i <= (s.size()) / 2; i++) {
            if (s[i] != s[j]) 
            return false;
            else
            {
                if(s[i]==s[j]&& ((i==j) || j-1==i))
                return true;
                j--;
            
            }
            
            }
            return true;
    }
};
