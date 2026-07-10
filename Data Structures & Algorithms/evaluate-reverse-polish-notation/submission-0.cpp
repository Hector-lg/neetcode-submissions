class Solution {
public:
    int evalRPN(vector<string>& tokens) {
        
    stack<int> eval;

    for(string& t: tokens){
        if(t == "+" || t == "-" || t == "*" || t == "/"){
            int b = eval.top(); eval.pop();   // derecho
            int a = eval.top(); eval.pop();    // izquierdo
            // según t, haz a OP b y pushea el resultado
            if(t == "+"){
                eval.push(a+b);
            }
            if(t == "-"){
                eval.push(a-b);
            }
            if(t == "/"){
                eval.push(a/b);
            }
            if(t == "*"){
                eval.push(a*b);
            }
        } else {
            eval.push(stoi(t));                // número -> push
        }
    }
        return eval.top();
    }
};
