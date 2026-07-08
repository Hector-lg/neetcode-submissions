class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int left= 0;
    /*
    lo que pienso es que primero los dos punteros empiecen al inicio de string a recorrer
    y preguntar este string ya esta en mi lista si no, lo meto y
    luego avanzar derecha ala derecha y preguntar este string ya esta en mi lista
    y aumentar o guardar el contador del substring mas grande
    si ya esta hay que ver donde esta y mover el puntero de la izquierda a un caracter despues de donde ya estaba el que encontramos 
    */
    unordered_map<char,int> seen;
    int longest = 0;
    for(int i=0; i<s.length();i++){

        if(seen.count(s[i]) > 0){
            left = max(left, seen[s[i]]+1);
            seen[s[left]] = left;
            if(longest< i-left+1){
                longest = i-left+1;
            }
        }
        seen[s[i]] = i;
        if(longest< i-left+1){
            longest = i-left+1;
        }
    }
    return longest;
    }
};
