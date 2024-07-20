int removeElement(int* nums, int numsSize, int val)
{
    int     i;
    int     k;

    i = 0;
    k = 0;
    for (int i = 0; i < numsSize; i++)
    {
        if (nums[i] != val)
            nums[k++] = nums[i];
    }
    return (k);
}