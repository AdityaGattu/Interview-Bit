int Solution::maxProfit(const vector<int> &A) {
    
    int curr_min=INT_MAX;
    int profit=0;
    for(int i=0;i<A.size();i++)
    {
        curr_min=min(curr_min,A[i]);
        profit=max(profit,A[i]-curr_min);
    }
    return profit;
}
