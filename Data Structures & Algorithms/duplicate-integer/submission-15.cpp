class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        std::unordered_set<int> vistos;
        int n = nums.size();
        for(int i=0; i<n; i++){
            if(vistos.count(nums[i])){
                return true;
                }
            vistos.insert(nums[i]);
            }
        return false;
        }
};