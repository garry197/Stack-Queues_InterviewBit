string Solution::simplifyPath(string A) {
    vector<string> ans;
    string temp="";
    A.push_back('/');
    for(auto i=0;i<A.length();i++)
    {
        if(A[i]=='/')
        {
            if(temp.size()==0)
            continue;
            else if(temp==".")
            {
                
            }
            
            else if(temp=="..")
            {
                if(ans.size()>0)
                ans.pop_back();
            }
            else
            ans.emplace_back(temp);
            
            temp.clear();
        }
        else
        temp.push_back(A[i]);
    }
    
    if(ans.empty())
    return "/";
    
    A.clear();
    
    for(int i=0;i<ans.size();i++)
    {
        A.append("/"+ans[i]);
    }
    
    
    return A;
    
    
    
    
    
}
