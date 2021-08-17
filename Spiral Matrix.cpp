class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        vector<int>res;
        int minrow=0;
        int mincol=0;
        int maxrow=matrix.size()-1;
        int maxcol=matrix[0].size()-1;

        int ele=matrix.size()*matrix[0].size();
        int cnt=0;
        cout<<ele;
        while(cnt<ele)
        {
            for(int i=minrow,j=mincol;j<=maxcol && cnt<ele;j++)
            {
                res.push_back(matrix[i][j]);
                cnt++;
            }
            minrow++;
            for(int i=minrow,j=maxcol;i<=maxrow && cnt<ele;i++)
            {
                res.push_back(matrix[i][j]);
                cnt++;
            }
            maxcol--;
            for(int i=maxrow,j=maxcol;j>=mincol && cnt<ele;j--)
            {
                res.push_back(matrix[i][j]);
                cnt++;
            }
            maxrow--;
            for(int i=maxrow,j=mincol;i>=minrow && cnt<ele ;i--)
            {
                res.push_back(matrix[i][j]);
                cnt++;
            }
            mincol++;
        }
        return res;
    }
};
