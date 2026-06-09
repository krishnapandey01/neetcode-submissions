class Solution {
public:
    int lengthOfLastWord(string s) {

        int ans =0;
        int n= s.size();

    for(int i=0; i<n; i++)
    {
        if(s[n-1-i] == ' ' && ans==0)
         continue;
        else if(s[n-1-i] == ' ')
         break; 
        ans++;
    }
      return ans;  
    }
};