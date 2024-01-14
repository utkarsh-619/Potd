int minMoves(int a[], int n, int k){
    
    int prev = a[0], ans = 0;
    for(int i=1;i<n;i++){
        if(a[i] > prev){
            int temp = a[i] - prev;
            temp = ceil((double)temp/(double)k);
            ans += temp;
            ans = ans % 1000000007;
            
            a[i] = a[i] - temp*k;
        }
        prev = a[i];
    }
    
    return ans;
    
}