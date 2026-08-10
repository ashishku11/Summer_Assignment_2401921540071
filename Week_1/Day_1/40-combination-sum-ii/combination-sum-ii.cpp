class Solution {
public:
        void findCombination(int index,int target, vector<int> &arr,vector<vector<int>> &ans,vector<int>&v){
        if(target==0){
            ans.push_back(v); 
        return;
        }
        for(int i=index;i<arr.size();i++){
            if(i>index && arr[i] == arr[i-1]) continue;
            if(arr[i]>target) break;
            v.push_back(arr[i]);
            findCombination(i+1,target-arr[i],arr,ans,v);
            v.pop_back();


        }
    }
public:
    vector<vector<int>> combinationSum2(vector<int>& candidates, int target) {
        sort(candidates.begin(),candidates.end());
        vector<vector<int>> ans;
        vector<int> v;
        findCombination(0,target,candidates,ans,v);
        return ans;
        
    }
};