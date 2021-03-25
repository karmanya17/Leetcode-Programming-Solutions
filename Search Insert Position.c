
//This is only the function required .
int searchInsert(int* nums, int numsSize, int target){
    int i=0,index,mid,high=numsSize-1,low=0,pos;
    while(low<=high)
    {
        mid=(high+low)/2;
        if(nums[mid]==target)
        {
            return mid;
        }
        else if(nums[mid]>target)
        {
            high=mid-1;
            pos=mid;
        }

        else
        {
            low=mid+1;
            pos=mid+1;
        }

    }

return pos;
}
