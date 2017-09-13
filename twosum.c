/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* twoSum(int* nums, int numsSize, int target) {
    int i,j;
    int* p=NULL;
    
    if(nums==NULL)
    {
        return NULL;
    }
    
    i=0;
    j=0;
    p=(int*)malloc(sizeof(int)*2);
    if(p==NULL)
    {
        return NULL;
    }
    
    memset(p,2,0);
    for(i=0;i<numsSize;i++)
    {
        for(j=i+1;j<numsSize;j++)
        {
            if((nums[i]+nums[j])==target)
            {
                p[0]=i;
                p[1]=j;
                return p;
            }
        }
    }
    return NULL;
}
