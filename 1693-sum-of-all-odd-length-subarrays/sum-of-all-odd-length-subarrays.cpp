class Solution {
public:
    int sumOddLengthSubarrays(vector<int>& arr) {
        
        int ans=0;
        for(int k=1;k<=arr.size();k=k+2){
          int sum=0;
                int low=0;
                int high=k-1;
               for(int j=0;j<k;j++){
                sum=sum+arr[j];
               }
               ans=ans+sum;
               while(high<arr.size()){
                sum=sum-arr[low];
                low++;
                 high++;
                if(high>=arr.size())
                break;
               
                sum=sum+arr[high];
                    ans=ans+sum;
               }
            
               
        }
        return ans;
    }
};