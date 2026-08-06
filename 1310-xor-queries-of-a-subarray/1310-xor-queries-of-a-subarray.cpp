class Solution {
public:
    vector<int> xorQueries(vector<int>& arr, vector<vector<int>>& queries) {
        vector<int>p(arr.size());
        p[0]=arr[0];
        for(int i=1;i<arr.size();i++)
        {
            p[i]=p[i-1]^arr[i];
        }
        vector<int>v1;
        for(int i=0;i<queries.size();i++)
        {
            int l=queries[i][0];
            int r=queries[i][1];
            if(l==0)
            {
                v1.push_back(p[r]);
            }
            else
            v1.push_back(p[r]^p[l-1]);
        }
        return v1;
    }
};