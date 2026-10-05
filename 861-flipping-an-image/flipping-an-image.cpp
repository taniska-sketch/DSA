class Solution {
public:
    vector<vector<int>> flipAndInvertImage(vector<vector<int>>& image) {
        
        int n = image.size();
        vector<vector<int>> res;

        for(int i = 0; i < n; i++) {
            
            vector<int> temp;

            for(int j = n-1; j >= 0; j--) {
                
                if(image[i][j] == 1)
                    temp.push_back(0);
                else
                    temp.push_back(1);
            }

            res.push_back(temp);
        }

        return res;
    }
};