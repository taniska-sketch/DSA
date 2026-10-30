class Solution {
public:
    vector<int> leftRightDifference(vector<int>& nums) {
        vector<int>res;
        int total=0;
        for(int i=0;i<nums.size();i++){
            total=total+nums[i];

        }
        int left=0;
        for(int i=0;i<nums.size();i++){
            int right=total-left-nums[i];
           int j=abs(left-right);
            res.push_back(j);
            left=left+nums[i];
        }
        return res;
    }
};