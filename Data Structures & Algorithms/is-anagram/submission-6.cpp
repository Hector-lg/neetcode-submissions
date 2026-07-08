#include <iostream>
#include <vector>
using namespace std;
#include <unordered_map>

class Solution {
public:
    bool isAnagram(string s, string t) {
        unordered_map<char, int> conteo_palabras;
    if(s.length() == t.length()){
        int n = s.length();
        for(int i=0; i<n; i++){
            conteo_palabras[s[i]]++;
            conteo_palabras[t[i]]--;
        }

        for(auto const& par: conteo_palabras){
            if(par.second != 0){
                return false;
            }
            
        }
        return true;
    }
    return false;
    }
};
