class Solution {
public:
    int minDays(vector<int>& bloomDay, int m, int k) {

        if(1LL * m * k > bloomDay.size())
            return -1;

        int low = *min_element(bloomDay.begin(), bloomDay.end());
        int high = *max_element(bloomDay.begin(), bloomDay.end());

        while(low < high) {

            int mid = low + (high - low) / 2;

            int bouquet = 0;
            int consecutive = 0;

            for(int i = 0; i < bloomDay.size(); i++) {

                if(bloomDay[i] <= mid) {

                    consecutive++;

                    if(consecutive == k) {
                        bouquet++;
                        consecutive = 0;
                    }
                }
                else {
                    consecutive = 0;
                }
            }

            if(bouquet >= m) {
                high = mid;
            }
            else {
                low = mid + 1;
            }
        }

        return low;
    }
};