#include <iostream>
using namespace std;

class Solution
{
public:
    int disSubseq(string &s)
    {
        long endsWith[26] = {};
        for (char c : s)
            endsWith[c - 'a'] = accumulate(begin(endsWith), end(endsWith), 1L);
        return accumulate(begin(endsWith), end(endsWith), 0L) + 1;
    }
    string betterString(string str1, string str2)
    {
        int l1 = disSubseq(str1);
        int l2 = disSubseq(str2);

        return (l1 > l2 ? str1 : (l1 == l2 ? str1 : str2));
    }
};