class Solution
{
public:
    bool checkKthBit(int n, int k)
    {
        return ((1 << k) & n) == (1 << k);
    }
};