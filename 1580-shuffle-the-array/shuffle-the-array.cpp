class Solution {
public:
    vector<int> shuffle(vector<int>& nums, int n) {
        vector<int>res;
        for(int i=0;i<n;i++){
            res.push_back(nums[i]);
            if((i+n)>nums.size())
            break;
            int c=i+n;
            res.push_back(nums[c]);
        }
        return res;
    }
};