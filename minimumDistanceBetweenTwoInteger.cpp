class Solution
{
public:
    int minDist(int a[], int n, int x, int y)
    {
        // code here
        int l = -1, r = -1, ans = INT_MAX;

        for (int i = 0; i < n; i++)
        {

            if (x == a[i])
                l = i;

            if (y == a[i])
                r = i;

            if (l != -1 && r != -1)
            {

                int diff = (l > r) ? l - r : r - l;

                ans = min(ans, diff);
            }
        }

        if (ans == INT_MAX)

            return -1;

        return ans;
    }
};