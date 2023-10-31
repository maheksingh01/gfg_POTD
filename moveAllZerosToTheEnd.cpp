
#include <iostream>
using namespace std;

class Solution
{
public:
    void pushZerosToEnd(int a[], int n)
    {
        int i = 0, j = 0;
        while (j < n)
        {
            if (a[j] != 0)
            {
                swap(a[i++], a[j]);
            }
            j++;
        }
    }
};