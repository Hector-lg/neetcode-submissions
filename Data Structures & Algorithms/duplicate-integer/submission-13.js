class Solution {
    /**
     * @param {number[]} nums
     * @return {boolean}
     */
    hasDuplicate(nums) {
        let n = new Set()
        for (let i = 0; i <nums.length; i++){
            if (n.has(nums[i])){
                return true;
            }
            n.add(nums[i])
        }
        return false
    }
}
