vector<int> Solution::prevSmaller(vector<int> &A) {

    vector<int>ans;
    
    stack<int>s;
    
    for(int i=0;i<A.size();i++)
    {
      while(s.size()!=0&&s.top()>=A[i])
      s.pop();
        
        if(s.size()==0)
        {
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
