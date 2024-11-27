int missingNumber(int* nums, int numsSize) {
    int temp;
    for(int i=0;i<numsSize-1;i++)
    {
        for(int j=i+1;j<numsSize;j++)
        {
            if((*(nums+i))>(*(nums+j)))
            {
                temp=(*(nums+i));
                (*(nums+i))=(*(nums+j));
                (*(nums+j))=temp;
            }
        }
    }
    if(*nums==1)
    return 0;
    int i;
     for(i=0;i<numsSize-1;i++)
    {
        temp=(*(nums+i));
        if(temp+1!=(*(nums+i+1)))
        {
            return temp+1;
        }
    }
    return (*(nums+(numsSize-1)))+1;
}
