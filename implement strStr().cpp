class Solution {
public:
    int strStr(string haystack, string needle) {
      if(needle.length()==0)
            return 0;
        if(needle.length()> haystack.length())
            return -1;
        
        int l = haystack.length();
        int nl = needle.length();
        int j=0;
        for(int i = 0 ; i<l ; i++){
            if(needle[0] == haystack[i]){
                if(l-i < nl)
                    return -1;
                else{
                    for(j=0; j< nl; j++ )
                        if(haystack[i+j]!=needle[j])
                            break;
                    if(j==nl)
                        return i;
                }
            }
        }
        
        return -1;
        
    }
};
