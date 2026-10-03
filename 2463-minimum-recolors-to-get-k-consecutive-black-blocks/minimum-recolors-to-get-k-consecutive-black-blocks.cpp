class Solution {
public:
    int minimumRecolors(string blocks, int k) {
        int low=0;
        int high=k-1;
        int ans=0;
        int count=0;
        for(int i=0;i<k;i++){
            if(blocks[i]=='W')
            count++;
        }ans=count;
        while(high<=blocks.length()-1){
           
            if(blocks[low]=='W')
            count--;
            low++;
            high++;
            if(high>blocks.length()-1)
            break;
            if(blocks[high]=='W')
            count++;
             ans=min(ans,count);
        }
        return ans;
    }
};