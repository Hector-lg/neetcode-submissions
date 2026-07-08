class Solution {
public:
    int characterReplacement(string s, int k) {
        int left=0, longest =0, maxFrec = 0;
    vector<int> countS(26,0);

    for(int right = 0; right<s.size(); right++){
        countS[s[right]-'A']++;
        maxFrec = max(maxFrec, countS[s[right]-'A']);

        if((right - left +1) - maxFrec > k ){
            countS[s[left]-'A']--;
            left++;
        } 
        longest = max(longest, right-left +1);
    }

    return longest;
    }
};
