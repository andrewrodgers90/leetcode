int singleNumber(int* nums, int numsSize)
{
    int     single;

    single = 0;
    for (int i = 0; i < numsSize; i++)
        single ^= nums[i];
    return (single);
}