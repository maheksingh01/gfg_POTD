class Solution{
    public:
    vector<int> find (int arr[], int n, int x){
        vector<int>ans;
       for(int i=0 ; i<n ; i++)
       {
           if(arr[i]==x)
           {
               ans.push_back(i);
               break;
           }
       }
        for(int i=n ; i>=0 ; i--)
       {
           if(arr[i]==x)
           {
               ans.push_back(i);
               break;
           }
       }
       if(ans.empty()) return {-1 , -1};
       return ans;
    }
}