class Solution {
public:
    bool checkIfPangram(string sentence) {
        unordered_map<char,int>f;
        int count=0;
        for(int i=0;i<sentence.length();i++){
            f[sentence[i]]++;

        }
        for(auto x:f){
            count++;
        }
        if(count==26)
        return true;
        else
        return false;
    }
    
};