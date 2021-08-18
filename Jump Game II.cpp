class Solution {
public:
    int jump(vector<int>& nums) {
        int n=nums.size();
        vector<int>jump(n,INT_MAX);
        jump[0]=0;
        if(nums[0]==0)
            return 0;
        for(int i=1;i<n;i++)
        {
            for(int j=0;j<i;j++)
            {
                if(i<=(j+nums[j]))                // if jump is possible
                {
                    jump[i]=min(jump[i],jump[j]+1);

                }
            }
        }
        for(int i=0;i<n;i++)
        {
            cout<<jump[i]<<" ";
        }
        return jump[n-1];
    }
};
