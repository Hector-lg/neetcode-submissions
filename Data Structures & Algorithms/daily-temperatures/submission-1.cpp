class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& temperatures) {
        stack<int> idices;
    vector<int> resp(temperatures.size(),0);
    int idx = 0;

    for(int i = 0; i<temperatures.size(); i++){
        while(!idices.empty() && temperatures[i]>temperatures[idices.top()]){
            idx = idices.top(); idices.pop();
            resp[idx] = i -idx;
        }
        idices.push(i);
    }
    return resp;

    }
};
