class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        set<int> res;
        for(int i=0;i<nums.size();i++){
            if(res.find(nums[i])!=res.end()){
                return nums[i];
            }
            res.insert(nums[i]);
        }
        return 0;
        
    }
};
