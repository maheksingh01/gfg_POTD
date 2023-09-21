int sum=0,ans=arr[0];
        for (int i=1 ; i<n ;i++){
            int temp = max(sum+arr[i], ans);
            sum = ans;
            ans = temp;
        }
        return ans;