int missingNumber(int* nums, int numsSize)
{
    int expectedSum;
    int actualSum;

    expectedSum = 0;
    actualSum = 0;
    for (int j = 1; j <= numsSize; j++)
        expectedSum += j;
    for (int i = 0; i < numsSize; i++)
        actualSum += nums[i];
    return (expectedSum - actualSum);
}