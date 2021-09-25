class Solution {
public:
    void dfs(int sr,int sc,vector<vector<int>>&image,vector<vector<bool>>&vis,int newColor,int m,int n,int oldColor)
    {
        int dx[]={-1,0,1,0};
        int dy[]={0,1,0,-1};
        image[sr][sc]=newColor;
        vis[sr][sc]=true;

        for(int i=0;i<4;i++)
        {
            int newX=sr+dx[i];
            int newY=sc+dy[i];

            if(newX>=0 && newY>=0 && newX<m &&newY <n &&image[newX][newY]==oldColor&&vis[newX][newY]==false)
            {

                dfs(newX,newY,image,vis,newColor,m,n,oldColor);
            }
        }
     return;
        // if(sr<0 || sc<0 || sr>=m || sc >=n )
        //     return;
        // if(vis[sr][sc]==true || image[sr][sc]!=oldColor)
        //     return;
        // vis[sr][sc]=true;
        // image[sr][sc]=newColor;
        // dfs(sr-1,sc,image,vis,newColor,m,n,oldColor);
        // dfs(sr,sc+1,image,vis,newColor,m,n,oldColor);
        // dfs(sr+1,sc,image,vis,newColor,m,n,oldColor);
        // dfs(sr,sc-1,image,vis,newColor,m,n,oldColor);
    }
    vector<vector<int>> floodFill(vector<vector<int>>& image, int sr, int sc, int newColor) {
        int m=image.size();
        int n=image[0].size();
        vector<vector<bool>>vis(m,vector<bool>(n,false));
        int oldColor=image[sr][sc];
        dfs(sr,sc,image,vis,newColor,m,n,oldColor);
        return image;
    }
};
