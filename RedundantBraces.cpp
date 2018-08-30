int Solution::braces(string A) {
    stack<char> s;
    for(auto ch: A)
    {
        if(ch==')')
        {
            int flag=0;
            char t=s.top();
            s.pop();
            
            
            
            
            while(t!='(')
            {
             
               
                if((t=='+')||(t=='-')||(t=='*')||(t=='/'))
                {
                    flag=1;
                }
                
                t=s.top();
                s.pop();
            }
            if(flag==0)
            return 1;
        }
           else
           s.push(ch);
            
    
    }
    return 0;
    
    
    
    
}
