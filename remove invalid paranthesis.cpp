class Solution {
public:
    int getmin(string str)
    {
        stack<int>st;
        for(int i=0;i<str.size();i++)
        {
            char ch=str[i];
            if(ch=='(')
            {
                st.push(ch);
            }
            else if(ch==')')
            {
                if(st.size()==0)
                {
                    st.push(ch);
                }
                else if(st.top()==')')
                {
                    st.push(ch);
                }
                else if(st.top()=='('){
                    st.pop();
                }
                    
            }
        }
        return st.size();
    }
    void solve(string str,int mr,set<string>&res)
    {
        if(mr==0)
        {
            int mrnow=getmin(str);
            if(mrnow==0)
            {
                if(res.find(str)==res.end())
                {
                   res.insert(str); 
                }
                
            }
            return;
        }
        for(int i=0;i<str.size();i++)
        {
            string left=str.substr(0,i);
            string right=str.substr(i+1);
            solve(left+right,mr-1,res);
        }
    }
    vector<string> removeInvalidParentheses(string s) {
        int mr=getmin(s);
        vector<string>ans;
        set<string>res;
        solve(s,mr,res);
        for(auto str:res)
        {
            ans.push_back(str);
        }
        return ans;
    }
};