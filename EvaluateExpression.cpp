int Solution::evalRPN(vector<string> &A) {
    stack<int> s;
    
    for(int i = 0; i < A.size(); i++)
   { 
	string c=A[i];
      if(c=="+")
    {
        int a=s.top();
        s.pop();
        int b=s.top();
        s.pop();
        int y=b+a;
        s.push(y);
    }
    else if(c=="-")
    {
         int a=s.top();
        s.pop();
        int b=s.top();
        s.pop();
        int y=b-a;
        s.push(y);
    }
    else if(c=="/")
    {
       
        int a=s.top();
        s.pop();
        int b=s.top();
        s.pop();
        int y=b/a;
        s.push(y);
        
    }
    else if(c=="*")
    {
        
         int a=s.top();
        s.pop();
        int b=s.top();
        s.pop();
        int y=b*a;
        s.push(y);
        
    }
    else
    {
        int q=stoi(c);
        s.push(q);
    }
    
}
     return s.top();
    
    
}
