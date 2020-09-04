int Solution::strStr(const string A, const string B) {
    
    if(A.find(B)!=string::npos)
    {
        int ans=A.find(B);
        return ans;
    }
    return -1;
}
************************************************************

sol2:

int Solution::strStr(const string A, const string B) {
    
    int start=0;
    int j=0;
    int temp_start=start;
    
    while(temp_start<A.length() && j<B.length())
    {
        if(A[temp_start]==B[j])
        {
            temp_start++;
            j++;
        }
        else
        {
            temp_start=++start;  // start+=1; and temp_start=start;
            j=0;
        }
        if(j==B.length()){return start;}
    }
    return -1;
}

