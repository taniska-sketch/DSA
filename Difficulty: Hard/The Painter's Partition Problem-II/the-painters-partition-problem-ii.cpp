class Solution {
  public:
    int minTime(vector<int>& arr, int k) {
        int low = *max_element(arr.begin(), arr.end());
        int high=0;
        for(int i=0;i<arr.size();i++){
        high+=arr[i];
    }
    while(low<high){
        int mid=low+(high-low)/2;
    int parts=1;
    int abs=0;
    for(int i=0;i<arr.size();i++){
        if(abs+arr[i]<=mid){
            abs+=arr[i];
        
        }
        else{
            parts++;
            abs=arr[i];
        }
        }
        if(parts<=k)
        high=mid;
        else
        low=mid+1;
    }
    return low;
    }
};