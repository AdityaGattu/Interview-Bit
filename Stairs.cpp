int Solution::climbStairs(int A) {
    
    int dp[100];
    
    dp[0]=1;
    dp[1]=1;
    for(int i=2;i<100;i++)
    {
        dp[i]=dp[i-1]+dp[i-2];
    }
    return dp[A];
}
