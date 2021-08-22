class Solution {
public:
    bool isIsomorphic(string s, string t) {
        if(s.size()!=t.size())
            return false;
        map<char,char>hash1;
        map<char,char>hash2;
        for(int i=0;i<s.size();i++)
        {
            if(!hash1.count(s[i])&&!hash2.count(t[i])){
                hash1[s[i]]=t[i];
            hash2[t[i]]=s[i];
            }
            else if(!hash1.count(s[i])||!hash2.count(t[i])||hash1[s[i]]!=t[i]||hash2[t[i]]!=s[i])
            {
                return false;
            }

        }
        return true;

    }
};
