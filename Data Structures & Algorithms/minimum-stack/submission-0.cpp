class MinStack {
public:
    vector<int> vec;

    MinStack() {
    }
    
    void push(int val) {
        vec.push_back(val);
    }
    
    void pop() {
        vec.pop_back();       
    }
    
    int top() {
        int temp = vec[vec.size()-1]; // vec.back();
        return temp;
    }
    
    int getMin() {

        int min = INT_MAX;

        for(auto &x : vec)
        {
            if(x<min)
            {
                min = x;
            }

        }

        return min;
        
    }
};
