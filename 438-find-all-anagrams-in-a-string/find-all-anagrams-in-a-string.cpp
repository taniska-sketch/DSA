class Solution {
public:
    vector<int> findAnagrams(string s, string p) {
        int low=0;
        int high=p.length()-1;
        vector<int>res;
      

        unordered_map<char,int>f;
        unordered_map<char,int>a;

          if(p.length()<=s.length()){
        for(int i=0;i<p.length();i++){
            f[p[i]]++;
            a[s[i]]++;
            
        }}
        else
        
         if(p.length() > s.length())
        return res;

        if(f==a)
        res.push_back(0);

        while(high<s.length()){
            a[s[low]]--;
            if(a[s[low]] == 0)
              a.erase(s[low]);
            low++;
            high++;

            if(high>s.length()-1)
            break;

            a[s[high]]++;

        if(f==a)
        res.push_back(low);
        }
        return res;
        
    }
};