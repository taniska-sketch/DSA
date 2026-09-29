class Solution {
public:
    int maximumUnits(vector<vector<int>>& boxTypes, int truckSize) {
        
        // Sort according to unitsPerBox in descending order
        sort(boxTypes.begin(), boxTypes.end(), 
            [](const vector<int>& a, const vector<int>& b) {
                return a[1] > b[1];
            });
        
        int ans = 0;
        
        for(int i = 0; i < boxTypes.size(); i++) {
            
            int boxes = boxTypes[i][0];
            int units = boxTypes[i][1];
            
            if(boxes <= truckSize) {
                // We can take all boxes
                ans += boxes * units;
                truckSize -= boxes;
            }
            else {
                // Only remaining space can be filled
                ans += truckSize * units;
                truckSize = 0;
                break;
            }
        }
        
        return ans;
    }
};