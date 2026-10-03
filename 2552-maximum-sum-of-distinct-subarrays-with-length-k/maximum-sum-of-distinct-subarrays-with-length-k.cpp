class Solution {
public:
    long long maximumSubarraySum(vector<int>& nums, int k) {
        unordered_map<int,int>f;
        int low=0;
        int high=k-1;
        long long ans=0;
        long long sum=0;
      
        for(int i=0;i<k;i++){
            f[nums[i]]++;
            if(f[nums[i]]==1){
                sum=sum+nums[i];
            }
        }
        
        while(high<nums.size()){
            if(f.size() == k)
    ans = max(ans, sum);
           
            f[nums[low]]--;
            if(f[nums[low]]==0){
            sum=sum-nums[low];
              f.erase(nums[low]);}
            low++;
            high++;
            if(high>nums.size()-1)
            break;
            f[nums[high]]++;
            if(f[nums[high]]==1)
            sum=sum+nums[high];

        }
        return ans;
    }
};