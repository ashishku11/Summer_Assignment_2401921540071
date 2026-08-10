class Solution {
public:
    void findSubsets(int index,vector<int> &nums,vector<int> &v,vector<vector<int>> &res){
        if(index == nums.size()){
            res.push_back(v);
            return;
        }
        v.push_back(nums[index]);
        findSubsets(index+1,nums,v,res);
        v.pop_back();
        findSubsets(index+1,nums,v,res);
    }
public:
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<int> v;
        vector<vector<int>> res;
        findSubsets(0,nums,v,res);
        return res;
        
    }
};