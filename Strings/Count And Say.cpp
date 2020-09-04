
string compress(string s)
{
    
    int cnt=0;
    string temp;
    for(int i=0;i<s.length()-1;i++)
    {
        
        if(s[i]==s[i+1])
        {
            cnt++;
            continue;
        }
        if(s[i]!=s[i+1])
        {
            cnt++;
            char y=cnt+48;
            temp+=y;
            temp+=s[i];
            cnt=0;
        }
    }
    int z=cnt+1;
    temp+=(char)(48+z);
    temp+=s[s.length()-1];
    
    return temp;
}



string Solution::countAndSay(int A) {
    
    vector<string>v;
    
    v.push_back("1");
    
    for(int i=1;i<A;i++)
    {
        string k=compress(v[i-1]);
        v.push_back(k);
    }
    return v[A-1];
}
