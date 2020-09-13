int Solution::singleNumber(const vector<int> &A) {
    int sum=0;
    int val;
    int result=0;
    
   for(int i=0;i<32;i++)
    {
        for(int j=0;j<A.size();j++)
        {
             sum+=((A[j]>>i)&1);
             val=(sum%3);
        }
        
        result = result | (val<<i);
        sum=0;
        val=0;
    }
    return result;
    
}
