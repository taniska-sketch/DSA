class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int low=0;
        int high=0;
        int ans=INT_MIN;
        int len=0;
        unordered_map<char,int>f;
        for(high=0;high<s.length();high++){
            f[s[high]]++;
            while(f[s[high]]>1){
                f[s[low]]--;
                low++;
            }
            len=high-low+1;
            ans=max(ans,len);

        }
        if(ans==INT_MIN)
        return 0;
        return ans;
    }
};