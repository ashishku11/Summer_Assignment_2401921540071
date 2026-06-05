class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int result = nums[0];
        int maxending = nums[0];
        //if(nums.size() == 1) return result;
        for(int i=1;i<nums.size();i++){
                maxending = max(nums[i],maxending + nums[i]);//maximum check
                result = max(result,maxending); //resubmitted for sync 
        }
        return result;
        
    }
};