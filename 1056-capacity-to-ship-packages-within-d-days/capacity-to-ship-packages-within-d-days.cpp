class Solution {
public:
    int shipWithinDays(vector<int>& weights, int days) {
        int low=*max_element(weights.begin(),weights.end());
        int high=0;
        for(int i=0;i<weights.size();i++){
            high+=weights[i];
        }

        while(low<high){
            int mid=low+(high-low)/2;
            int countdays=1;
            int capacity=0;
            for(int i=0;i<weights.size();i++){
               if( capacity+weights[i]<=mid)
                capacity +=weights[i];
                else
                { countdays++;
                capacity=weights[i];}
                

            }
            if (countdays<=days){
                high=mid;
            }
            else
            low=mid+1;
        }
        return low;
    }
};