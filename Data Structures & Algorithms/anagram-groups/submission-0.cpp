class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string, vector<string>> anagramas;
    int n = strs.size();
    for(int i=0; i<n; i++){
        string copia = strs[i];
        sort(copia.begin(), copia.end());
        anagramas[copia].push_back(strs[i]);
    }
    vector<vector<string>> resultado;
    for(auto const& par: anagramas){
        resultado.push_back(par.second);
    }
    return resultado;
    }
};
