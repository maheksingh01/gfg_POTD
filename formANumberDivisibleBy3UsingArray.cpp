class Solution
{
public:
    int isPossible(int N, int arr[])
    {
        int rem = 0;
        for (int i = 0; i < N; i++)
        {
            rem += (arr[i] % 3);
        }
        return (rem % 3 == 0) ? 1 : 0;
    }
};