class Solution {
public:
    vector<vector<int>> onesMinusZeros(vector<vector<int>>& grid) {
        int n=grid.size();
        vector<int>r(n,0);
        int m=grid[0].size();
        vector<int>c(m,0);
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
                if(grid[i][j]==1)
                {
                    r[i]++;
                   c[j]++;
                }
            }
        }
        vector<vector<int>>d(n,vector<int>(m,0));
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
                int r0=m-r[i];
                int c0=n-c[j];
                d[i][j]=r[i]+c[j]-r0-c0;
            }
        }
        return d;
    }
};