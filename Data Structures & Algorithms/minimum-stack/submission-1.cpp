class MinStack {
    private:
        stack<int> principal;
        stack<int> minSec;
    public:
        MinStack(){
            
        }

        void push(int val){
            principal.push(val);
            
            if(!minSec.empty()){
                minSec.push(min(minSec.top(), val));
            }else {minSec.push(val);}

        }

        void pop(){
            principal.pop();
            minSec.pop();
        }

        int top(){
            return principal.top();
        }

        int getMin(){
            return minSec.top();
        }
};
