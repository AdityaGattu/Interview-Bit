int Solution::maxProduct(const vector<int> &A) {
    
    int curr_maxprod = A[0];
    int curr_minprod = A[0];
    
    int ans=A[0];
    
    int prev_max_prod=A[0];
    int prev_min_prod=A[0];
    
    for(int i=1;i<A.size();i++)
    {
        curr_maxprod=max(A[i]*prev_min_prod,max(A[i]*prev_max_prod,A[i]));
        curr_minprod=min(A[i]*prev_min_prod,min(A[i]*prev_max_prod,A[i]));
        ans=max(ans,curr_maxprod);
        prev_max_prod=curr_maxprod;
        prev_min_prod=curr_minprod;
    }
    return ans;
}
