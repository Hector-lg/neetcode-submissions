class Solution {
public:
    
int horasNecesarias(vector<int> &piles, int mid){
    int sum = 0;
    for(int i = 0; i<piles.size(); i++){
        sum += (piles[i] + mid - 1) / mid;
    }
    return sum;
}
int minEatingSpeed(vector<int>& piles, int h){
    int left = 1;
    int right = *std::max_element(piles.begin(), piles.end());
    int candidate = 0;
    while(left <= right){
        int mid = left + (right-left)/2;
        if(horasNecesarias(piles,mid)<= h){
            if(candidate == 0){
                candidate = mid;
            }
            else if(candidate > mid){
                candidate = mid;
            }
            right = mid-1;
        }
        if(horasNecesarias(piles, mid)> h){
            left = mid+1;
        }
    }
    return candidate;

}
};
