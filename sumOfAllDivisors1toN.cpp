class Solution
{
public:
    long long sumOfDivisors(int N)
    {
        long long sum = 0;

        for (int i = 1; i <= N; i++)
        {
            if (N == 0)
                return 0;

            sum += (N / i) * i;
        }

        return sum;
    }
};