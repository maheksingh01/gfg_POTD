class Solution
{
    int minOperation(int n)
    {
        int operations = 0;
        while (n)
        {
            if (n % 2 == 0)
                n /= 2;
            else
                n -= 1;
            operations++;
        }
        return operations;
    }
};