class Solution {
public:
    int repeatedNTimes(vector<int>& nums) {
        unordered_map<int,int>f;
        int count=0;
        for(int i=0;i<nums.size();i++){
            f[nums[i]]++;
            if(f[nums[i]]==2)
            count =nums[i];
        }
        return count;
        
    }
};