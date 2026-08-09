class Solution {
public:
    void findCombination(int index,int target, vector<int> &arr,vector<vector<int>> &ans,vector<int>&v){
        if(index == arr.size()){
            if(target==0){
                ans.push_back(v);
            }
            return;
        }
        
        
        if(arr[index] <= target){
            v.push_back(arr[index]);
            findCombination(index,target-arr[index],arr,ans,v);
            v.pop_back();
        }
        findCombination(index+1,target,arr,ans,v);
    }
public:
    vector<vector<int>> combinationSum(vector<int>& candidates,int target) {
        vector<vector<int>> ans;
        vector<int> v;
        findCombination(0,target,candidates,ans,v);
        return ans;

    }
    
};