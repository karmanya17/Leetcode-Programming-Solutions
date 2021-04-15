class Solution {
public:
    string convert(string s, int numRows) {
        int L = s.length();
        if (numRows == 1 || numRows >= L){
            return s;
        }
        int C = L/(2*numRows - 2) ;
        string ans;
        for (int i=0;i<numRows;i++){
            for(int j=0;j<=C;j++){
                if ((2*numRows - 2)*j + i < L)
                    ans.push_back(s[(2*numRows - 2)*j + i]) ;
                if (i > 0 && i < numRows - 1 && ((2*numRows - 2)*(j+1) - i) < L){
                    ans.push_back(s[(2*numRows - 2)*(j+1) - i]) ;
                }
            }
        }
        return ans;
    }
};
