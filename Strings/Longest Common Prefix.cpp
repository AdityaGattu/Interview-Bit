string Solution::longestCommonPrefix(vector<string> &A) {
    
    
    sort(A.begin(),A.end());
    
    int x=A[0].length();
    int y=A[A.size()-1].length();
    
    string temp;
    int i=0;
    while(x!=0 || y!=0)
    {
        if(A[0][i]==A[A.size()-1][i])
        {
            temp+=A[0][i];
            i++;
            x--;y--;
        }
        else
        {
            break;
        }
    }
    return temp;
}
