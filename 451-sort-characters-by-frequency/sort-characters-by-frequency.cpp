class Solution {
public:
    string frequencySort(string s) {
        unordered_map<char,int>f;
        for(int i=0;i<s.length();i++){
            f[s[i]]++;

        }
        vector<pair<char,int>>res;
        for(auto x:f){
            res.push_back(x);
        }
        sort(res.begin(),res.end() ,[](auto &a,auto &b){
        return a.second>b.second;});
        string v="";
        for(auto x:res){
            for(int i=0;i<x.second;i++){
                v+=x.first;
            }
        }
        return v;
    }
};