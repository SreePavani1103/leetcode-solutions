int t=1e6+1;
vector<bool>f(t,true);
class Solution {
void see()
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
}
public:
    vector<int> closestPrimes(int left, int right) {
        see();
        vector<int>v;
        for(int i=left;i<=right;i++)
        {
            if(f[i])
            {
                v.push_back(i);
            }
        }
        if(v.size()<2)
        {
            return {-1,-1};
        }
        for( int i=0;i<v.size();i++)
        {
            cout<<v[i];
        }
        vector<int>a={-1,-1};
        int m=INT_MAX;
        for(int i=1;i<v.size();i++)
        {
            int d=v[i]-v[i-1];
            if(d<m)
            {
                m=d;
                a[0]=v[i-1];
                a[1]=v[i];
            }
        }
        return a;
    }
};