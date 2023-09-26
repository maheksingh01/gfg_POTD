class Solution{
    public:
    // arr[] : int input array of integers
    // k : the quadruple sum required
    vector<vector<int> > fourSum(vector<int> &arr, int k) {
        
        vector<vector<int>> result;
        
        //base case:
        if(arr.size() < 4){
            return result;
        }
        
        sort(arr.begin(), arr.end());
        
        int n = arr.size();
        
        for(int i = 0;i< n- 3;i++){
            
            if(i > 0 && arr[i] == arr[i -1])
                continue;
                
            for(int j = i+1; j< n-2;j++){
                
                if(j > i+1 && arr[j] == arr[j-1])
                    continue;
                    
                int left = j+1;
                int right = n-1;
                
                while(left < right){
                    int sum = arr[i] + arr[j] + arr[left] + arr[right];
                    
                    if( sum == k){
                        result.push_back({arr[i], arr[j] ,arr[left], arr[right]});
                        left++;
                        right--;
                        
                        
                        while(left<right && arr[left] == arr[left - 1]) 
                            left++;
                        
                        while(left<right && arr[right] == arr[right +1])
                            right--;
                    } else if (sum < k)
                        left++;
                    else 
                        right--;
                }
            }
        }
        
        return result;
    }
};