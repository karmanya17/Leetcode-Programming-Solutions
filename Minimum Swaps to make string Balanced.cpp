class Solution {
public:
    int minSwaps(string s) {
        int open=0,close=0;
        int j=s.size()-1;
        int swap=0;
        for(int i=0;i<s.size();i++)
        {
            j=s.size()-1;
            if(s[i]=='[')
                open++;
            if(s[i]==']')
                close++;
            if(close>open)
            {
                swap++;
                open++;
                close--;
            }
        }
        return swap;
    }
};
