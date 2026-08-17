class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int n = nums.size();
        int Xor1 = 0;
        int Xor2 = 0;
        for(int i = 0;i<n;i++){
            Xor2 = Xor2 ^ nums[i];
            Xor1 = Xor1 ^ (i+1);
        }
        return Xor1 ^ Xor2;
        
    }
};