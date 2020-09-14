int Solution::solve(int A) {
    
    if(A==1 || A==2)
    {
        return A;
    }
    
    long long int cnt=0;
    
    int n=1;
    
    while(A/n!=0)
    {
        int temp=A/n;
        
        if(temp%2==0)
        {
            cnt+=n*(temp/2);
        }
        else
        {
            cnt+=(n*(temp/2));
            cnt+=(A-(n*temp)+1);
        }
        n=n*2;
    }
    
    return cnt%1000000007;
}




********************************************************************************
not optimal
*************************
int setbits(int x)
{
    int cnt=0;
    for(int i=0;i<32;i++)
    {
        cnt+=((x>>i)&1);
    }
    return cnt;
}

int Solution::solve(int A) {
    
    long long sum=0;
    for(int i=1;i<=A;i++)
    {
        sum+=setbits(i);
        sum%=1000000007;
    }
    return sum;
}
