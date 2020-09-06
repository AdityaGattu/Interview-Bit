string Solution::addBinary(string A, string B) {
    
    int i=A.length()-1;
    int j=B.length()-1;
    int carry=0;
    
    string temp;
    
    while(i>=0 || j>=0)
    {
        int sum=0;
        sum+=carry;
        
        if(i>=0)
        {
            int a=A[i]-'0';
            sum+=a;
            i--;
        }
        
        
        if(j>=0)
        {
            int b=B[j]-'0';
            sum+=b;
            j--;
        }
        
        temp+=(char)(sum%2+'0');
        carry=sum/2;
        
    }
    
    if(carry>0)
    {
        temp+=(char)(carry+'0');
    }
    
    reverse(temp.begin(),temp.end());
    return temp;
}
