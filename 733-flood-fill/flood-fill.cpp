class Solution {
public:
    int x[4] = {-1, 1, 0, 0};
    int y[4] = {0, 0, -1, 1};

    bool valid(int i, int j, int n, int m) {
        if(i < 0 || i >= n || j < 0 || j >= m)
            return false;

        return true;
    }

    void dfs(vector<vector<int>>& image,
             int i, int j,
             int n, int m,
             int oldColor, int color) {

       image[i][j]=color;

        for(int k = 0; k < 4; k++) {

            int row = i + x[k];
            int col = j + y[k];

            if(valid(row, col, n, m) 
            && image[row][col] == oldColor){
              

               dfs(image,row,col,n,m,oldColor,color);
            }
        }
    }

    vector<vector<int>> floodFill(vector<vector<int>>& image,
                                   int sr, int sc, int color) {

        int n = image.size();
        int m = image[0].size();
         int oldColor=image[sr][sc];
        if(oldColor == color)
            return image;
    
        
        dfs(image,sr,sc,n,m,oldColor,color);

            
        return image;
    }
};