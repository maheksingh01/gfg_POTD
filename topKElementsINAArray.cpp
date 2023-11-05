#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;

class Solution
{
public:
    vector<int> topK(vector<int> &nums, int k)
    {
        // Code here
        unordered_map<int, int> mp;
        for (int i = 0; i < nums.size(); i++)
            mp[nums[i]] += 1;
        vector<pair<int, int>> v;
        for (auto x : mp)
            v.push_back(make_pair(x.second, x.first));
        sort(v.rbegin(), v.rend());
        vector<int> ans;
        for (int i = 0; i < k; i++)
            ans.push_back(v[i].second);
        return ans;
    }
};