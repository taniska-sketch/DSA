class Solution {
public:
    int countGoodSubstrings(string s) {
        int low=0;
        int high=2;
        int count=0;
        int ans=0;
        unordered_map<char,int>f;
        for(int i=0;i<3;i++){
            f[s[i]]++;
            if(f[s[i]]==1)
            count++;
        }
        while(high<s.length()){
            if(count==3)
            ans=ans+1;

            f[s[low]]--;
            if(f[s[low]]==0){
            f.erase(s[low]);
            count--;
            }
            low++;
            high++;
            if(high>s.length()-1)
            break;
            f[s[high]]++;
           

        if(f[s[high]] == 1)
        count++;
           
        }
        return ans;
    }
};