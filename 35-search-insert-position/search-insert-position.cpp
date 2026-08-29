class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
         int low=0;
        int high=nums.size()-1;
        while(low<=high){
            int guess=low+(high-low)/2;
            if(target<nums[guess]){
                  high=guess-1;
              }
                else if(target==nums[guess]){
                    return guess;
                }
                else{ low=guess+1;
                  
                   
                }
                  
                
            }
        return low;
    }
};