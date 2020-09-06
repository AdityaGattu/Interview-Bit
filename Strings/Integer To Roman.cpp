string Solution::intToRoman(int A) {
    
    vector<int>v={1000,900,500,400,100,90,50,40,10,9,5,4,1};
    vector<string>s={"M","CM","D","CD","C","XC","L","XL","X","IX","V","IV","I"};
    
    string temp;
    
    for(int i=0;i<v.size();i++)
    {
        while(A-v[i]>=0)
        {
            temp+=s[i];
            A-=v[i];
        }
    }
    
    return temp;
    
}
