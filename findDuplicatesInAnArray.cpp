#include<vector>
class Solution{
    public:
    vector<int> duplicates(int arr[], int n){
        int cnt[n]={0};
        for(int i = 0 ; i < n ; i++){
           cnt[arr[i]]++;
       }
       
       vector<int>ans;
       
       for(int i = 0 ; i < n ; i++){
           
           if(cnt[i] > 1){
               ans.push_back(i);
           }
       }
       
       
       if(ans.size() == 0){
           ans.push_back(-1);
           return ans;
           }

     return ans;
    };
};