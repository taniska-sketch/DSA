class Solution {
public:
    bool uniqueOccurrences(vector<int>& arr) {
        unordered_map<int,int>f;
        unordered_map<int,int>g;
        for(int i=0;i<arr.size();i++){
           f[arr[i]]++;
           
        }
       for(auto x:f)
       {
        g[x.second]++;
       }
        for(auto x:g){
            if(x.second>1)
            return false;
        }
        return true;
        
    }
};