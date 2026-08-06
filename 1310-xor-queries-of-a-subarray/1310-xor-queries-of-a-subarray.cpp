class Solution {
public:
int product( vector<int>& a,int l ,int r)
{
    int k=a[l];
    for(int i=l+1;i<=r;i++)
    {
        k^=a[i];
    }
    return k;
}
    vector<int> xorQueries(vector<int>& arr, vector<vector<int>>& queries) {
        vector<int>v;
        for(int i=0;i<queries.size();i++)
        {
            v.push_back(product(arr,queries[i][0],queries[i][1]));
        }     
        return v;   
    }
};