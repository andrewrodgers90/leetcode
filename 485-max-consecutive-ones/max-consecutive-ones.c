int findMaxConsecutiveOnes(int* nums, int numsSize)
{
    int i;
    int currMax;
    int ret;

    i = 0;
    currMax = 0;
    ret = 0;
    while (i < numsSize)
    {
        if (nums[i] == 1)
        {
            while (i < numsSize && nums[i] == 1)
            {
                currMax++;
                i++;
            }
            if (currMax > ret)
                ret = currMax;
            currMax = 0;
        }
        i++;
    }
    return (ret);
}