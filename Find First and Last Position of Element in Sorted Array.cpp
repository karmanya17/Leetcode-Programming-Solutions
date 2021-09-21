class Solution {
public:
    int binarysearch(vector<int>nums,int l,int h,int target)
    {
        int mid=(l+h)/2;
        while(l<=h)
        {
            if(nums[mid]==target)
            {
                return mid;
            }
            else if(nums[mid]>target)
                return binarysearch(nums,0,mid-1,target);
            else
                return binarysearch(nums,mid+1,h,target);

        }
        return -1;
    }
    vector<int> searchRange(vector<int>& nums, int target) {
        int n=nums.size();
        int idx=binarysearch(nums,0,n-1,target);
        if(idx==-1)
        {
            return{-1,-1};
        }
        else
        {
            int rbound=upper_bound(nums.begin()+idx,nums.end(),nums[idx])-nums.begin();
            int lbound=lower_bound(nums.begin(),nums.begin()+idx,nums[idx])-nums.begin();
            rbound-=1;
            return{lbound,rbound};
        }
    }
};
