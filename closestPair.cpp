#include<vector>

class Solution{
    public:
    vector<int> printClosest(int arr[], int brr[], int n, int m, int x) {
        vector<int>ans(2);
        int left=0, right=m-1, minn=INT_MAX;
        while(left<n and right>=0){
            int dff=abs((arr[left]+brr[right])-x);
            if(dff<minn){
               ans[0]=arr[left]; ans[1]=brr[right];
               minn=dff;
            }
            (arr[left]+brr[right])>x ? right-- : left++;
        }
        return ans;
    }
};