class Solution {
public:
    vector<int> advantageCount(vector<int>& nums1, vector<int>& nums2) {

        sort(nums1.begin(), nums1.end());

        vector<pair<int,int>> ans;

        for(int i = 0; i < nums2.size(); i++) {
            ans.push_back({nums2[i], i});
        }

        sort(ans.begin(), ans.end());

        int left = 0;
        int right = nums1.size() - 1;

        vector<int> result(nums2.size());

        // YAHAN se change
        for(int i = ans.size() - 1; i >= 0; i--) {

            int value = ans[i].first;
            int index = ans[i].second;

            if(nums1[right] > value) {
                result[index] = nums1[right];
                right--;
            }
            else {
                result[index] = nums1[left];
                left++;
            }
        }

        return result;
    }
};