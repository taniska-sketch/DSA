class Solution {
public:
    int minSwaps(vector<int>& nums) {
        int low=0;
        int count=0;
        int ans=0;
        int m=0;
        int sum=0;
        
        for(int i=0;i<nums.size();i++){
            if(nums[i]==1)
            count++;
        }
         if (count <= 1 || count == nums.size())
            return 0;
        for(int i=0;i<count;i++){
            sum=sum+nums[i];
        }
        ans=count-sum;
        int high=count-1;
        while(low<nums.size()-1){
           
            sum=sum-nums[low];
            low++;
            high++;

            sum=sum+nums[high%nums.size()];
            int m=count-sum;
             ans=min(ans,m);
        }
        return ans;
    }
};