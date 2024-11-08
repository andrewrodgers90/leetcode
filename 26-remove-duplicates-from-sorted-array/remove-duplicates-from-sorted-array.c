int removeDuplicates(int* nums, int numsSize) {
    int write = 1;
    int len = 0;

    for (int read = 1; read < numsSize; read++)
    {
        if (nums[read] != nums[read - 1])
            nums[write++] = nums[read];
    }
    return (write);
}