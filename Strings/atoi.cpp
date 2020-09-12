int Solution::atoi(const string A) {
    
    stringstream ss;
    ss<<A; // add a string to the stringstream object.
    
    long long val;
    ss>>val; //read something from the stringstream object (first word here)
    
    if(val<INT_MIN)
    {
        return INT_MIN;
    }
    
    if(val>INT_MAX)
    {
        return INT_MAX;
    }
    return val;
    
}
