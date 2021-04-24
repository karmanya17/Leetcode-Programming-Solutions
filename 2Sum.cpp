
/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* twoSum(int* nums, int numsSize, int target, int* returnSize)
{
    int i,j;
    for(i=0;i<numsSize;i++)
{
        for(j=i+1;j<numsSize;j++)
    {
        if(nums[j]==target-nums[i])
        {
            int* res=(int*)malloc(2*sizeof(int));
            res[0]=i;
            res[1]=j;
           *returnSize=2;
            return res;
        }

    }
}
    return 0;
}
