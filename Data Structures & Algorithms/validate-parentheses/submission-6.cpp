class Solution {
public:
    bool isValid(string s) {
        stack<char> pila;
        
    unordered_map<char, char> pares = {
        {')', '('},
        {']', '['},
        {'}', '{'}
    };

    for(char c: s){
        if(pares.count(c)){
                if(pila.empty()){
                    return false;
                }
                if(pares[c] != pila.top()){
                    return false;
                }
                pila.pop();
            }
        else{
            pila.push(c);
        }
    }
    return pila.empty();
    }
};
