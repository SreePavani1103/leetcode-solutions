class Solution {
public:
    vector<int> findBall(vector<vector<int>>& grid) {
        int n=grid.size();
        int m=grid[0].size();
        vector<int>v;
        for(int k=0;k<m;k++)
        {
            int i=0;
            int j=k;
            while(i<n)
            {
                if(grid[i][j]==1)
                {
                    if(j+1<m && grid[i][j+1]==1)
                    {
                        i++;
                        j++;
                    }
                    else
                    {
                        j=-1;
                        break;
                    }
                }
                else
                {
                    if(j-1>=0 && grid[i][j-1]==-1)
                    {
                        i++;
                        j--;
                    }
                    else
                    {
                        j=-1;
                        break;
                    }
                }
            }
            v.push_back(j);
        }
        return v;
    }
};