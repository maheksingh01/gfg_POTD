class Solution
{
public:
    string colName(long long int n)
    {
        unordered_map<int, char> umap;
        umap[0] = 'Z';
        char ch = 'A';
        for (int i = 1; i <= 25; i++)
        {
            umap[i] = ch;
            ch++;
        }
        string result = "";
        while (n != 0)
        {
            int x = n % 26;
            if (x == 0)
            {
                result = umap[x] + result;
                n = (n / 26) - 1;
            }
            else
            {
                result = umap[x] + result;
                n = n / 26;
            }
        }
        return result;
    }
};