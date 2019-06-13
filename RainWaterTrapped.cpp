int Solution::trap(const vector<int> &A) {
    if(A.size()==0)
    return 0;
    
    int left=A[0];
    
    
    vector<int> x(A.size());
    x[0]=left;
    
    for(int i=1;i<A.size();i++)
    {
        left=max(left,A[i]);
        x[i]=left;
    }
    
    int n=A.size();
    vector<int> y(n);
    
    int right=A[n-1];
    y[n-1]=A[n-1];
    
    for(int i=n-2;i>-1;i--)
    {
        right=max(right,A[i+1]);
        y[i]=right;
    }
    
    
    
    int ans=0;
    
    for(int i=0;i<n;i++)
    {
        int yo=min(x[i],y[i]);
       // cout<<yo<<".";
        if(yo>A[i])
        ans=ans+yo-A[i];
    }
    
    return ans;
    
    
    
}
