class Solution {
public:
    int maxFreq(string s, int maxLetters, int minSize, int maxSize) {
        unordered_map<char,int>charf;
        unordered_map<string,int>f;
        int ans=0;
        int low=0;
     
        int high=minSize-1;
        string res="";
        for(int i=0;i<minSize;i++){
            charf[s[i]]++;
            res+=s[i];

        }
        if(charf.size()<=maxLetters)
        f[res]++;

        while(high<s.length()){
            charf[s[low]]--;
            if(charf[s[low]]==0)
            charf.erase(s[low]);
           
            low++;
            high++;
            if(high>s.length()-1)
            break;
            charf[s[high]]++;
             
            string res = s.substr(low, minSize);

            if(charf.size()<=maxLetters)
            f[res]++;
        }
        for(auto x:f){
            ans=max(x.second,ans);
         
        }
        return ans;
    }
};