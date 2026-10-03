class Solution {
public:
    int maxVowels(string s, int k) {

        int low = 0;
        int high = k - 1;
        int count = 0;
        int ans = 0;

        // First window
        for(int i = 0; i < k; i++) {
            if(s[i] == 'a' || s[i] == 'e' || s[i] == 'i' ||
               s[i] == 'o' || s[i] == 'u') {
                count++;
            }
        }

        ans = count;

        // Sliding window
        while(high < s.length() - 1) {

            // Remove left character
            if(s[low] == 'a' || s[low] == 'e' || s[low] == 'i' ||
               s[low] == 'o' || s[low] == 'u') {
                count--;
            }

            low++;
            high++;

            // Add new right character
            if(s[high] == 'a' || s[high] == 'e' || s[high] == 'i' ||
               s[high] == 'o' || s[high] == 'u') {
                count++;
            }

            ans = max(ans, count);
        }

        return ans;
    }
};