int missingNumber(int* nums, int numsSize)
{
    int expectedSum;
    int actualSum;

    expectedSum = numsSize * (numsSize + 1) / 2;
    actualSum = 0;
    for (int i = 0; i < numsSize; i++)
        actualSum += nums[i];
    return (expectedSum - actualSum);
}