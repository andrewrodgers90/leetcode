/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* twoSum(int* nums, int numsSize, int target, int* returnSize) {

*returnSize = 0;
int *answer = (int *)malloc(sizeof(int) * 2);
if (answer == NULL)
{
    *returnSize = 0;
    return (NULL);
}
int i, j;

i = -1;

    while (++i < numsSize)
    {
        j = i;
        while (++j < numsSize)
        {
            if (nums[i] + nums[j] == target)
            {
                answer[0] = i;
                answer[1] = j;
                *returnSize = 2;
                return (answer);
            }
        }
    }
    return (NULL);
}