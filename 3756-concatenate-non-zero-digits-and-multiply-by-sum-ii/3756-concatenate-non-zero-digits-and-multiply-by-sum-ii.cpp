class Solution {
public:
int fun(int l,int r,vector<int>& p10, vector<int>& pres,
            vector<int>& nonz, vector<int>& con)
{
    int mod=1e9+7;
        int digit=pres[r+1]-pres[l];
        int zec=nonz[r+1]-nonz[l];
        int x=(con[r+1]-1LL*con[l]*p10[zec]%mod+mod)%mod;
        return (1LL*x*digit)%mod;

}
    vector<int> sumAndMultiply(string s, vector<vector<int>>& queries) {
        int n=s.size();
        int mod=1e9+7;
        //1 10 100 1000
        vector<int>p10(n+1,0);
        p10[0]=1;
        for(int i=1;i<p10.size();i++)
        {
            p10[i]=(1LL*p10[i-1]*10)%mod;
        }
        vector<int>pres(n+1,0);
        for(int i=0;i<n;i++)
        {
            pres[i+1]=(1LL*pres[i]+(s[i]-'0'));
        }
        vector<int>nonz(n+1,0);
        for(int i=0;i<n;i++)
        {
            nonz[i+1]=nonz[i];
            if(s[i]!='0')
            {
                nonz[i+1]++;
            }
        }
        vector<int>con(n+1,0);
        for(int i=0;i<n;i++)
        {
            con[i+1]=con[i];
            if(s[i]!='0')
            {
                con[i+1]=(1LL*con[i+1]*10+(s[i]-'0'))%mod;
            }
        }
        vector<int>v;
       for(int i=0;i<queries.size();i++)
       {
        v.push_back(fun(queries[i][0],queries[i][1],p10,pres,nonz,con));
       }
       return v;
    }
};