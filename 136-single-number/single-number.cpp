class Solution {
public:
    int singleNumber(vector<int>& nums) {
        unordered_map<int,int>f;
        int ans=0;
        for(int i=0;i<nums.size();i++){
            f[nums[i]]++;

        }
        for(auto x:f){
            if(x.second==1)
            ans=x.first;
        }
        return ans;
    }
};