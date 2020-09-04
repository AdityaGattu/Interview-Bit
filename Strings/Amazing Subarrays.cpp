int Solution::solve(string A) {
    int count=0;
    for(int i=0;i<A.length();i++)
    {
        
        char c=A[i];
        
        if(c=='a' || c=='e' || c=='i' || c=='o' || c=='u' ||
            c=='A' || c=='E' || c=='I' || c=='O' || c=='U' )
        {
        for(int j=i;j<A.length();j++)
        {
            count++;
        }
        }
    }
    return count%10003;
}
*********************************************************************
Sol2:

int Solution::solve(string A) {
    int count=0;
    int n=A.length();
    
    for(int i=0;i<n;i++)
    {
        char c=A[i];
        if(c=='a' || c=='e' || c=='i' || c=='o' || c=='u' ||
            c=='A' || c=='E' || c=='I' || c=='O' || c=='U' )
        {
             count+=n-i;
        }
    }
    return count%10003;
}
