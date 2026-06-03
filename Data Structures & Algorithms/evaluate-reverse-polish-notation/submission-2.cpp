class Solution {
   public:
    int evalRPN(vector<string>& tokens) {
        int res = stoi(tokens[0]);
        int i=0;

        while(tokens.size()>1){
            if(!(tokens[i]=="+"||tokens[i]=="-"||tokens[i]=="*"||tokens[i]=="/"))
            {
                i++;
            continue;
            }
            
            int a = (stoi)(tokens[i-2]);
            int b = (stoi)(tokens[i -1]);
            string c = tokens[i];
            int d;

                if(c =="+")
                    d = a + b;
                else if(c =="-")
                    d = a - b;
                else if(c =="*")
                    d = a * b;
                else if(c =="/")
                    d = a / b;

            
            tokens[i - 2] = to_string(d);
            tokens.erase(tokens.begin()+i);
            tokens.erase(tokens.begin()+i-1);
            i=i-1;
            res = d;
        }
        return res;
    }
};
