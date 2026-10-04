class Solution {
public:
    int divisorSubstrings(int num, int k) {
        int low=0;
        int high=k-1;
        int count=0;
        string p;
        string s=to_string(num);
        for(int i=0;i<k;i++){
          p.push_back(s[i]);
        }
        int x=stoi(p);
        while(high<s.length()){
            if(x != 0 &&num%x==0)
            count++;

            p.erase(0,1);
            low++;
            high++;
            if(high>s.length()-1)
            break;

            p.push_back(s[high]);
            x = stoi(p);
        }
        
       return count;
    }
};