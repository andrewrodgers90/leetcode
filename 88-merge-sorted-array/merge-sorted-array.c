void merge(int* nums1, int nums1Size, int m, int* nums2, int nums2Size, int n)
{
    int a;
    int b;
    int k;

    a = m - 1;
    b = n - 1;
    k = m + n - 1;
    
    while (a >= 0 && b >= 0)
    {
        if (nums1[a] > nums2[b])
            nums1[k--] = nums1[a--];
        else
            nums1[k--] = nums2[b--];
    }
    while (b >= 0)
        nums1[k--] = nums2[b--];
}