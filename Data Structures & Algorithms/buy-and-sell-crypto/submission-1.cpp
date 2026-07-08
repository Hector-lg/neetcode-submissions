class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int minVisto = INT_MAX;
    int mejorGanancia = 0;

    for(int precio: prices){
        if(mejorGanancia < precio - minVisto){
            mejorGanancia = precio - minVisto;
        }
        
    if(precio < minVisto){
            minVisto = precio;
        }
    }
    if(mejorGanancia < 0){
        return 0;
    }
    return mejorGanancia;
    }
};
