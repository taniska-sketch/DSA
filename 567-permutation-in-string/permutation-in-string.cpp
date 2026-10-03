class Solution {
public:
    bool checkInclusion(string s1, string s2) {

        if(s1.length() > s2.length())
            return false;

        unordered_map<char, int> f;
        unordered_map<char, int> a;

        int k = s1.length();
        int low = 0;
        int high = k - 1;

        // s1 ki frequency
        for(int i = 0; i < k; i++) {
            f[s1[i]]++;
            a[s2[i]]++;
        }

        // first window
        if(f == a)
            return true;

        // sliding window
        while(high < s2.length()) {

            // remove old element
            a[s2[low]]--;

            if(a[s2[low]] == 0)
                a.erase(s2[low]);

            low++;
            high++;

            // window khatam ho gayi
            if(high >= s2.length())
                break;

            // add new element
            a[s2[high]]++;

            // compare
            if(f == a)
                return true;
        }

        return false;
    }
};