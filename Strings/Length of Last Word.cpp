int Solution::lengthOfLastWord(const string A) {
    
    if(A.length()==0)
    {
        return 0;
    }
    
    vector<string>v;
    string temp="";
    
    for(int i=0;i<A.length()-1;i++)
    {
        if(A[i]==' ' && A[i+1]==' ')
        {
            continue;
        }
        
        if(A[i]==' ' && A[i+1]!=' ')
        {
            if(temp!="")v.push_back(temp);
            temp="";
        }
        
        else
        {
            temp+=A[i];
        }
    }
    if(A[A.length()-1]!=' '){temp+=A[A.length()-1];}
    if(temp!="")v.push_back(temp);
    
    if(v.size()==0){return 0;}
    
    return v[v.size()-1].length();
}
