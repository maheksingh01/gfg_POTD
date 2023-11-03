
#include <iostream>
#include <unordered_map>
using namespace std;

class Solution
{
public:
    // Function to check if the
    // Pythagorean triplet exists or not
    bool checkperfectsquare(int n)
    {

        // If ceil and floor are equal
        // the number is a perfect
        // square
        if (ceil((double)sqrt(n)) == floor((double)sqrt(n)))
        {
            return true;
        }
        return false;
    }
    bool checkTriplet(int arr[], int n)
    {
        // code here
        unordered_map<int, bool> mp;
        for (int i = 0; i < n; i++)
        {
            mp[arr[i]] = true;
        }
        for (int i = 0; i < n - 1; i++)
        {
            for (int j = i + 1; j < n; j++)
            {
                int a = (arr[i] * arr[i]) + (arr[j] * arr[j]);
                if (checkperfectsquare(a))
                    if (mp.find(sqrt(a)) != mp.end())
                    {
                        return true;
                    }
            }
        }
        return false;
    }
};
