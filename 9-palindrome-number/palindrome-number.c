bool isPalindrome(int x) {
    int remain;
    long long int copy, rev;

    copy = x;
    rev = 0;

    if (x < 0)
        return (false);

    while (copy != 0)
    {
        long long int temp = copy % 10;
        rev = rev * 10;
        rev = rev + temp;
        copy /= 10;
    }
    return (rev == x);
}