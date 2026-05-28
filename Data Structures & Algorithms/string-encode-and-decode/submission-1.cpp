class Solution {
public:

    string encode(vector<string>& strs) {

        string enc;

        for(auto &ch : strs)
        {
            enc += (ch + "~");
        }

return enc;
    }

    vector<string> decode(string s) {

        vector<string> dec;
        string temp = "";
        for(auto &ch : s)
        {
            if(ch == '~')
            {
            dec.push_back(temp);
            temp = "";
            }
            else
            {
                temp += ch;
            }


        }

        return dec;

    }
};
