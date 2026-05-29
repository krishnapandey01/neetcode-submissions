class Solution {
   public:
    string encode(vector<string>& strs) {
        string enc;

        for (auto& ch : strs) {
            enc += (ch + "~");
            enc += to_string(ch.size());
            enc += "~";
        }

        return enc;
    }

    vector<string> decode(string s) {
        vector<string> dec;
        int counter = 0;
        string temp = "";
        for (int i = 0; i < s.size(); i++) {
            if (s[i] == '~') {
                string count = "";

                for (int j = i + 1; s[j] != '~'; j++) {
                    count += s[j];
                    i++;
                }

                if (count != "" && ((stoi(count)) == counter)) {
                    dec.push_back(temp);
                    temp = "";
                    counter = 0;
                    count = "";
                    i++;
                }
                else {
                    counter++;
                    temp += s[i];
                }
            } else {
                temp += s[i];
                counter++;
            }
        }

        return dec;
    }
};
