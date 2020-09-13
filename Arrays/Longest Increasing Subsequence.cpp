int Solution::lis(const vector<int> &A) {
    
    vector<int>temp(A.size(),1);
    int mx=1;
    for(int j=1;j<A.size();j++)
    {
        for(int i=0;i<j;i++)
        {
            if(A[i]<A[j])
            {
                temp[j]=max(temp[j],temp[i]+1);
            }
        }
        mx=max(mx,temp[j]);
    }
    
    
    return mx;
}
