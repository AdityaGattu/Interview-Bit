int dpx[8]={1,1,1,0,-1,-1,-1};
    int dpy[8]={0,-1,1,1,0,1,-1};
    
    bool valid(int x,int y,int A,int B)
    {
        if(x<0||x>A||y<0||y>B)
        {
            return false;
        }
        return true;
    }
    
    bool incircle(int x,int y,int C,int R,vector<int> &E,vector<int> &F)
    {
        for(int i=0;i<C;i++)
        {
        if( ((E[i]-x)*(E[i]-x))+((F[i]-y)*(F[i]-y))<=(R*R) )
        {
            return true;
        }
        }
        return false;
    }
