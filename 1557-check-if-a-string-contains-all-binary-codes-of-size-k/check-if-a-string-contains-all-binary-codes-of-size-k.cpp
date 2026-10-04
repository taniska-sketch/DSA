class Solution {
public:
    bool hasAllCodes(string s, int k) {
        unordered_set<string>f;

        if(k > s.length())
            return false;
        
        for(int i=0;i<=s.length()-k;i++){
            string temp=s.substr(i,k);
            f.insert(temp);
        }
        int total= 1 << k;;
        if(f.size()==total)
        return true;
        else 
         return false;
    }
};