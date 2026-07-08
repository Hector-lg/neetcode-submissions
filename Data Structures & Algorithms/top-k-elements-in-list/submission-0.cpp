#include <iostream>
#include <vector>
using namespace std;
#include <unordered_map>
#include <algorithm>


class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int,int> frecuencias;
    for(auto numero: nums){
        frecuencias[numero]++;
    }
    vector<pair<int,int>> resultadoOrd;
    int n = nums.size();
    for(auto const& par : frecuencias){
        resultadoOrd.emplace_back(par.second, par.first);
    }
    sort(resultadoOrd.rbegin(), resultadoOrd.rend());
    vector<int> salida;
    for (int i=0; i<k; i++){
        salida.push_back(resultadoOrd[i].second);
    }
    return salida;
    }
};
