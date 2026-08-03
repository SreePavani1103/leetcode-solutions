class Solution {
public:
const int mod=1e9+7;
   int product(vector<int>&pow,int l, int r)
   {
       long long  k =1;
        for(int i=l;i<=r;i++)
        {
            k=(pow[i]*k)%mod;
        }
        return (int)k;
       
   }
    vector<int> productQueries(int n, vector<vector<int>>& queries) {
       vector<int>v;
        int i=1;
        while(n!=0)
        {
            if(n&1)
            {
                v.push_back(i);
            }
            i*=2;
            n=n/2;
        }
        vector<int>v1;
        for(int i=0;i<queries.size();i++)
        {
              v1.push_back( product(v,queries[i][0],queries[i][1]));
        }
        return v1;
    }
};