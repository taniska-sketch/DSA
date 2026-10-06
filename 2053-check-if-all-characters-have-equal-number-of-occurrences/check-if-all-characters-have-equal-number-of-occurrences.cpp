class Solution {
public:
    bool areOccurrencesEqual(string s) {
        unordered_map<char,int>f;
        for(int i=0;i<s.length();i++){
            f[s[i]]++;



        } int freq = f.begin()->second;

        for(auto x:f){
            if(x.second != freq)
                return false;
        }
        return true;
    }
};