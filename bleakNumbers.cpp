class Solution
{
    int is_bleak(int n)
    {
        // Code here.
        int cnt = 0;
        int num = n;
        // count no. of bits in n
        while (num)
        {
            cnt++;
            num /= 2;
        }

        // range of x will be from n-cnt to n-1
        num = n - cnt;
        for (int i = max(0, num); i < n; i++)
        {
            cnt = 0;
            int x = i;
            // counting number of setBits in curr value of x
            while (x)
            {
                if (x % 2 != 0)
                    cnt++;
                x /= 2;
            }

            // check given condition
            if (i + cnt == n)
                return 0;
        }
        return 1;
    }
};