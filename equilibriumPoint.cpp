class Solution{
    public:
    int equilibriumPoint(long long a[], int n){
         long long s = 0;
        for(int i = 0; i < n; i++) s += a[i];
        
        long long left = 0;
        
        for(int i = 0; i < n; i++) {
            
            if(i > 0) left += a[i-1];
            long long right = s - left - a[i];
            
            if(right == left){
                return i+1;
            }
        }
        return -1;
    }
};