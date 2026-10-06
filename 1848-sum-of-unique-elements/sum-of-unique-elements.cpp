class Solution {
public:
    int sumOfUnique(vector<int>& nums) {
        int sum=0;
        unordered_map<int,int>f;
        for(int i=0;i<nums.size();i++){
            f[nums[i]]++; 
          
        }
        for(auto x:f){
        if(x.second==1)
        sum=sum+x.first;}
        return sum;
    }
};