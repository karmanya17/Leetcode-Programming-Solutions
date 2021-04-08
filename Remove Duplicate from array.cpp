class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int start=0;
        if(nums.size()==0)
            return 0;
        for(int i=1;i<nums.size();i++)
        {
            if(nums[i]!=nums[start])
            {
                nums[++start]=nums[i];
            }

        }
        return start+1;
    }
};
