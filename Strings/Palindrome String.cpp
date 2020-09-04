int Solution::isPalindrome(string A) {
    int f=0;
    string temp;
    for(int i=0;i<A.length();i++)
    {
        if(isalnum(A[i]))
        {
            temp+=A[i];
        }
    }
    
    
    int l=0;
    int h=temp.length()-1;
    
    
    while(l<h)
    {
        if(toupper(temp[l])==toupper(temp[h]))
        {
            l++;
            h--;
        }
        else
        {
            f=1;
            break;
        }
    }
    if(f==1){return 0;}
    return 1;
}
