class Solution {
    /**
     * @param {string} s
     * @param {string} t
     * @return {boolean}
     */
    isAnagram(s, t) {
        if(s.length !== t.length){
            return false
        }
        let contador1 = {}
        let contador2 = {}
        for (const letra of s){
            if(contador1[letra]){
                contador1[letra]+=1
            }
            else{
                contador1[letra] = 1
            }
        }
        for (const letra of t){
            if(contador2[letra]){
                contador2[letra]+=1
            }
            else{
                contador2[letra] = 1
            }
        }
        const claves = Object.keys(contador1)
        for (const clave of claves) {
            // Si son diferentes, matamos la función y devolvemos false
            if (contador1[clave] !== contador2[clave]) {
                return false;
            }
        }

        // Si sobrevivió a todo el bucle sin fallar, es true
        return true;

    }
}
