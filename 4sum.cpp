class Solution {
public:
    vector<vector<int>> fourSum(vector<int>& nums, int target) {
        vector<vector<int>> res;
        int n=nums.size();
        if(nums.empty())
            return res;
        sort(nums.begin(),nums.end());
        for(int i=0;i<n;i++)
        {
            for(int j=i+1;j<n;j++)
            {
                int target2=target-nums[j]-nums[i];
                int left=j+1,right=n-1;
                
                while(left<right)
                {
                int sum2=nums[left]+nums[right];
                if(target2<sum2)
                {
                    right--;
                }
                else if(target2>sum2)
                {
                    left++;
                }
                else{
                    vector<int>quad(4,0);
                    quad[0]=nums[i];
                    quad[1]=nums[j];
                    quad[2]=nums[left];
                    quad[3]=nums[right];
                    res.push_back(quad);
                    
                    while(left<right && nums[left]==quad[2]) ++left;
                    while(left<right && nums[right]==quad[3]) --right;
                }    
            }
                
                while(j+1<n && nums[j+1]==nums[j]) j++;
        }
            while(i+1<n && nums[i+1]==nums[i]) i++;
    }
        
        return res;
    }
};
