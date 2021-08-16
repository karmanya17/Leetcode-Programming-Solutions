class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
         vector<vector<bool>> rowCache(9, vector<bool>(9, false));
        vector<vector<bool>> colCache(9, vector<bool>(9, false));
        vector<vector<vector<bool>>> gridCache(3, vector<vector<bool>>(3, vector<bool>(9, false)));
        int number;

        for(int i=0; i < board.size(); i++) {
            for(int j=0; j < board[0].size(); j++ ) {

                if (board[i][j] == '.') continue;

                number = board[i][j] - '0';
                cout<<number-1<<"\n";
                if (rowCache[i][number-1] ||
                    colCache[j][number-1] ||
                    gridCache[i/3][j/3][number-1]) {
                    return false;
                }else {
                    rowCache[i][number-1] = true;
                    colCache[j][number-1] = true;
                    gridCache[i/3][j/3][number-1] = true;
                }
            }
        }
        return true;

    }
};
