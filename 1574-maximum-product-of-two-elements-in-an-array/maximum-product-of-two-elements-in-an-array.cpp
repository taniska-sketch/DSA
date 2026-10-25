class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int a=0;
        for(int i=0;i<nums.size();i++){
            for(int j=i+1;j<nums.size();j++){
             a=max(a,(nums[i] - 1) * (nums[j] - 1));
            }
        }
        return a;
    }
};