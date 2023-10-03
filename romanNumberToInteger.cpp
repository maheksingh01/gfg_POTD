class Solution
{
public:
    int romanToDecimal(string &str)
    {
        unordered_map<char, int> romanToInteger = {
            {'I', 1},
            {'V', 5},
            {'X', 10},
            {'L', 50},
            {'C', 100},
            {'D', 500},
            {'M', 1000}};
        int result = 0;
        int prevValue = 0;
        for (int i = str.size() - 1; i >= 0; i--)
        {
            int currentValue = romanToInteger[str[i]];
            if (currentValue < prevValue)
            {
                result -= currentValue; // Subtract for cases like "IV" or "IX"
            }
            else
            {
                result += currentValue;
            }
            prevValue = currentValue;
        }
        return result;
    }
};