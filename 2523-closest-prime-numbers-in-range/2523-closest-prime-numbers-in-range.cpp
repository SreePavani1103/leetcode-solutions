int t=1e6+1;
vector<bool>f(t,true);
bool see()
{
    f[0]=f[1]=false;
    for(int i=2;i*i<=t;i++)
    {
        if(f[i]==true)
        {
            for(int j=i*i;j<=t;j+=i)
            {
                f[j]=false;
            }
        }
    }
    return true;
}
bool k = see();
class Solution {
public:
    vector<int> closestPrimes(int left, int right) {
       // see();
        vector<int>a={-1,-1};
        int p=-1;
        int md=INT_MAX;
        for(int i=left;i<=right;i++)
        {
           if(f[i])
           {
            if(p!=-1)
            {
                int d=i-p;
                if(d<md)
                {
                    md=d;
                    a={p,i};
                }
                if(d==2)
                return a;
            }
            p=i;
           }
        }

        return a;
    }
};