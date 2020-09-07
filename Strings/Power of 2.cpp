

int Solution::power(string A) {

    long long num=0;
    
    for(int i=0;i<A.length();i++)
    {
        num=(10*num)+(A[i]-'0');
    }
    
    if(num == 1)
        return 0;
    int p = num-1;
    if((num & p) == 0)
        return 1;
    else
        return 0;
   
}

