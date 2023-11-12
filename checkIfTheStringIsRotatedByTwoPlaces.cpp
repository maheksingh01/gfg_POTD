
#include <iostream>
using namespace std;

class Solution
{
    bool isRotated(string str1, string str2)
    {
        int n1 = str1.length();
        int n2 = str2.length();

        if (n1 != n2)
        {
            return false;
        }

        string leftAns = "";
        string rightAns = "";

        for (int i = 2; i < n1; i++)
        {
            leftAns += str1[i];
        }
        for (int i = 0; i < 2; i++)
        {
            leftAns += str1[i];
        }

        for (int i = n2 - 2; i < n2; i++)
        {
            rightAns += str1[i];
        }
        for (int i = 0; i < n2 - 2; i++)
        {
            rightAns += str1[i];
        }

        if (str2 == leftAns || str2 == rightAns)
        {
            return true;
        }
        else
        {
            return false;
        }
    }
};