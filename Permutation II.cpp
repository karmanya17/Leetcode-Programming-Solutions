class Solution {
public:
    void solve(int idx,vector<int>nums,set<vector<int>>&res)
    {
        if(idx==nums.size())
        {
            res.insert(nums);
            return;
        }

        for(int i=idx;i<nums.size();i++)
        {
            swap(nums[i],nums[idx]);
            solve(idx+1,nums,res);
            swap(nums[i],nums[idx]);
        }
    }
    vector<vector<int>> permuteUnique(vector<int>& nums) {
        set<vector<int>>res;
        vector<vector<int>>ans;
        solve(0,nums,res);
        for(auto i :res)
        {
            ans.push_back(i);
        }
        return ans;

    }
};
