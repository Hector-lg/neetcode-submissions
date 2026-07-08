class Solution {
    /**
     * @param {string} s
     * @return {boolean}
     */
    isPalindrome(s) {
        // 1. Clean the string
        let stringLimpio = s.replace(/[^a-zA-Z0-9]/g, '');

        // 2. Pre-process with hashes (Manacher's style)
        let stringComodin = "#";
        for (let i = 0; i < stringLimpio.length; i++) {
            stringComodin = stringComodin + stringLimpio[i] + "#";
        }

        // 3. Expand from the center
        let middle = Math.floor((stringComodin.length - 1) / 2);
        let left = middle;
        let right = middle;

        while (left >= 0 && right < stringComodin.length) {
            // Fix: Use .toLowerCase() as a method
            if (stringComodin[left].toLowerCase() !== stringComodin[right].toLowerCase()) {
                return false;
            }
            left--;
            right++;
        }
        return true;
    }
}