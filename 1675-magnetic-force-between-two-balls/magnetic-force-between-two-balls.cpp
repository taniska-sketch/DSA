class Solution {
public:
    int maxDistance(vector<int>& position, int m) {
        
        sort(position.begin(), position.end());

        int low = 1;
        int high = position[position.size() - 1] - position[0];

        while (low <= high) {
            
            int mid = low + (high - low) / 2;

            int balls = 1;
            int lastPosition = position[0];

            for (int i = 1; i < position.size(); i++) {
                
                if (position[i] - lastPosition >= mid) {
                    balls++;
                    lastPosition = position[i];
                }
            }

            if (balls >= m) {
                low = mid + 1;
            }
            else {
                high = mid - 1;
            }
        }

        return high;
    }
};