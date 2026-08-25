class Solution {
public:
    int missingMultiple(vector<int>& nums, int k) {
        int n =k;
        sort(nums.begin() , nums.end());
        while(1){
            if(binary_search(nums.begin(), nums.end(), k)){
                k = n+k;
            }else{
                return k;
            }
        }
        return k;
        
    }
};