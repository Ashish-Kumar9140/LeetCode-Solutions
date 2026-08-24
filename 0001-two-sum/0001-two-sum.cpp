class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int> r;
        unordered_map<int , int > m;
        for(int i =0 ; i< nums.size() ; i++){
            int first = nums[i];
            int sec = target - first;
            if(m.find(sec) != m.end()){
                r.push_back(i);
                r.push_back(m[sec]);
                break;
            }
            m[first] = i;
        }
           
    return r;                
    }
};