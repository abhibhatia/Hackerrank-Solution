long candies(int n, vector<int> arr) {
    vector<int> candy;
    for(int i=0;i<n;i++){
        candy.push_back(1);
    }
    long ans = 0;
    for(int i=1;i<n;i++){
        if(arr[i]>arr[i-1]){
            candy[i] = 1 + candy[i-1];
        }
    }
    for(int i=n-1;i>=1;i--){
        if(arr[i-1] > arr[i] && candy[i-1] <=candy[i]){
            candy[i-1] = 1 + candy[i];
        }
    }
    for(int i=0;i<n;i++){
        ans+=candy[i];
    }
    return ans;
}