vector<int> Solution::prevSmaller(vector<int> &A) {

    vector<int>ans;
    
    stack<int>s;
    
    for(int i=0;i<A.size();i++)
    {
      while(s.size()!=0&&s.top()>=A[i])
      s.pop();
        
        if(s.size()==0)
        {int Solution::trap(const vector<int> &arr){
    
    int n=arr.size();
    int left[n];
 
   
    int right[n];
 
  
    int water = 0;
 
   
    left[0] = arr[0];
    for (int i = 1; i < n; i++)
       left[i] = max(left[i-1], arr[i]);
 
    // Fill right array
    right[n-1] = arr[n-1];
    for (int i = n-2; i >= 0; i--)
       right[i] = max(right[i+1], arr[i]);
 
   .
    for (int i = 0; i < n; i++)
       water += min(left[i],right[i]) - arr[i];
 
    return water;
     
        
    }
    
    
    
    
    
    
    

    


            ans.push_back(-1);
        }
        else
        {
            ans.push_back(s.top());
        }
        s.push(A[i]);
        
    }
    
    return ans;
    
}
