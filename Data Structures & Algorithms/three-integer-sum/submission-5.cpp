class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {  
    sort(nums.begin(), nums.end());
    vector<vector<int>> resp;
    
    for(int i= 0; i < nums.size(); i++){
        int left = i+1;
        int right = nums.size() -1;
        if (i > 0 && nums[i] == nums[i-1]) {
            continue;
        }
        while(left<right){
            int suma = nums[i]+nums[left]+nums[right];
            if(suma == 0){
                resp.push_back({nums[i],nums[left],nums[right]});
                left++;
                right--;
                while (left < right && nums[left] == nums[left - 1]) {
                    left++;
                }
            }
            else if(suma<0) left++;
            else right--;
        }
    }
    return resp;
    }
};
