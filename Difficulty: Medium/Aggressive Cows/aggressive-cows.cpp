
        class Solution {
        public:
            int aggressiveCows(vector<int> &stalls, int k) {

                sort(stalls.begin(), stalls.end());

                int low = 1;
                int high = stalls[stalls.size() - 1] - stalls[0];

                int ans = 0;

                while(low <= high) {

                    int mid = low + (high - low) / 2;

                    int cows = 1;
                    int lastPosition = stalls[0];

                    for(int i = 1; i < stalls.size(); i++) {

                        if(stalls[i] - lastPosition >= mid) {
                            cows++;
                            lastPosition = stalls[i];
                        }
                    }

                    if(cows >= k) {
                        // mid possible hai
                        ans = mid;
                        low = mid + 1;
                    }
                    else {
                        // mid possible nahi hai
                        high = mid - 1;
                    }
                }

                return ans;
            }
        };
    