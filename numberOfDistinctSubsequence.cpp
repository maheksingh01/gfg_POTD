#include <iostream>
#include <string>
#include <map>
#include <vector>
using namespace std;

class Solution
{
public:
    // Time Complexity: O(n)
    // Space Complexity: O(n)
    int distinctSubsequences(string s)
    {
        const int MOD = 1000000007;
        int n = s.length();
        vector<long long> dp(n + 1);
        dp[0] = 1;                 // Base case: there is one distinct subsequence for an empty string.
        map<char, int> last_occur; // Create a map to store the last occurrence index of each character.

        for (int i = 1; i <= n; i++)
        {
            dp[i] = (2 * dp[i - 1]) % MOD;

            // Check if the current character has appeared before in the string.
            if (last_occur.find(s[i - 1]) != last_occur.end())
            {
                dp[i] = (dp[i] - dp[last_occur[s[i - 1]]] + MOD) % MOD;
                // If the character repeats, subtract the count of subsequences that end with its last occurrence.
                // Use modulo and add MOD to ensure the result is non-negative.
            }

            last_occur[s[i - 1]] = i - 1; // Store the index of the last occurrence of the current character in the map.
        }
        return static_cast<int>(dp[n]);
    }
};