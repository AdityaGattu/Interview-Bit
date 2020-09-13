string expand_around_centre(string s,int l,int r)
{
    while(l>=0 && r<s.length() && s[l]==s[r])
    {
        l--;r++;
    }
    return s.substr(l+1,r-l-1);
    
}
string Solution::longestPalindrome(string A) {
    
    if(A.length()==0){return "";}
    string longest=A.substr(0,1);
    
    for(int i=0;i<A.length()-1;i++)
    {
        string s1=expand_around_centre(A,i,i);
        if(s1.length()>longest.length())
        {
            longest=s1;
        }
        
        string s2=expand_around_centre(A,i,i+1);
        if(s2.length()>longest.length())
        {
            longest=s2;
        }
        
        
    }
    return longest;
    
}
