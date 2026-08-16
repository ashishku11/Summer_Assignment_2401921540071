class Solution {
public:
    bool check(vector<int>& nums) {
        vector<int> arr = nums;
        int n = nums.size();
        sort(arr.begin(),arr.end());
        for(int x=0;x<n;x++){
            vector<int> temp;
            for(int i=x;i<n;i++){
                temp.push_back(arr[i]);

            }
            for(int i=0;i<x;i++){
                temp.push_back(arr[i]);
            }
            if(temp == nums){
                return true;
            }
        }
        return false;
        

        
    }
};