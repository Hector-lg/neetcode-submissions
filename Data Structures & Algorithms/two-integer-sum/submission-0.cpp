#include <iostream>
#include <vector>
using namespace std;
#include <unordered_map>

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int, int> vistos;
    int complemento = 0;
    int n = nums.size();
    for(int i=0; i<n; i++){
        complemento = target - nums[i];
        // .count() revisa si la llave existe de forma seguira en O(1), es muy eficiente
        if(vistos.count(complemento) > 0){
            return {vistos[complemento],i};
        }
        vistos[nums[i]]= i;
    }
    return {}; 
    }
};
