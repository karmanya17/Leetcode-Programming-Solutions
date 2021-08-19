class Solution {
public:
    void colswap(vector<vector<int>>& m,int n)
    {
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<n/2;j++)
            {
                swap(m[i][j],m[i][n-1-j]);
            }
        }
    }
    void transpose(vector<vector<int>>& m,int n)
    {
        for(int i=0;i<n;i++)
        {
            for(int j=i;j<n;j++)
            {
                swap(m[i][j],m[j][i]);
            }
        }
    }

    void rotate(vector<vector<int>>& matrix) {
        int n=matrix.size();
        transpose(matrix,n);
        colswap(matrix,n);
    }
};
