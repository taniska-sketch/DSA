class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {
        int low=0;
        int high=k-1;
        double ans=INT_MIN;
        int sum=0;
        double avg=0;
        for(int i=0;i<k;i++){
        sum=sum+nums[i];
        
        }
        avg=(double) sum/k;
        while(high<nums.size()){
            ans=max(ans,avg);
            sum=sum-nums[low];
            low++;
            high++;
            if(high>nums.size()-1)
            break;
            sum=sum+nums[high];
            avg=(double) sum/k ;
        }
        return ans;
    }
};