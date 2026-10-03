class Solution {
public:
    int numOfSubarrays(vector<int>& arr, int k, int threshold) {
        int low=0;
        int high=k-1;
        double ans=INT_MIN;
        int count=0;
        int sum=0;
        double avg=0;
        for(int i=0;i<k;i++){
        sum=sum+arr[i];
        
        }
        avg=(double) sum/k;
        while(high<arr.size()){
             if(avg>=threshold)
             count++;
            sum=sum-arr[low];
            low++;
            high++;
            if(high>arr.size()-1)
            break;
            sum=sum+arr[high];
            avg=(double) sum/k ;
        }
        return count;
    }
};