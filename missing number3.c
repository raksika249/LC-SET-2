int missingNumber(int* nums, int numsSize) {
    int f;
    for(int i=0;i<=numsSize;i++)
    {
        for(int j=0;j<numsSize;j++)
        {
            f=0;
            if(i==nums[j])
            {
                f=1;
                break;
            }
        }
        if(f==0)
        return i;
    }
    return 0;
}
