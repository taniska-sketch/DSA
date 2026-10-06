class Solution {
public:
    int majorityElement(vector<int>& nums) {
        unordered_map<int,int>f;
        int count=0;
        int n=nums.size();
        for(int i=0;i<nums.size();i++){
             f[nums[i]]++;
             if(f[nums[i]]>n/2)
             count=nums[i];
        }
        return count;
    }
};