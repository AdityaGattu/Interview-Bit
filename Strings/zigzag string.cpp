string Solution::convert(string A, int B) {

    if(A.length()==0)
    {
        return "";
    }
    
    if(B==1)
    {
        return A;
    }
    
    vector<string>ans(B);
    
    int row=0;
    int dir=1;
    
    for(int i=0;i<A.length();i++)
    {
        ans[row]+=A[i];
        
        if(row==0)
        {
            dir=1;
        }
        
        if(row==B-1)
        {
            dir=-1;
        }
        
        row+=dir;
    }
    
    string res;
    
    for(auto ele:ans)
    {
        res+=ele;
    }
    
    return res;
}
