int Solution::singleNumber(const vector<int> &A) {
    
    int xor_val=0;
    for(int i=0;i<A.size();i++)
    {
        xor_val = xor_val^A[i];
    }
    return xor_val;
}
