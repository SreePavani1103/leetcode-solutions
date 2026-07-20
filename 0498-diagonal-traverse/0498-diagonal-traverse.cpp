class Solution {
public:
    vector<int> findDiagonalOrder(vector<vector<int>>& mat) {
        vector<int>v;
        int n=mat.size();
        int m=mat[0].size();
        int r=0,c=0;
        bool up=true;
        for(int i=0;i<m*n;i++)
        {
            v.push_back(mat[r][c]);
            
                if(up)
                {
                    if(c==m-1)
                    {
                        r++;
                        up=false;
                    }
                   else if(r==0)
                    {
                        c++;
                        up=false;
                    }
                    else
                    {
                        r--;c++;
                    }
                }
                else
                {
                    if(r==n-1)
                    {
                        c++;
                        up=true;
                    }
                    else if(c==0)
                    {
                        r++;
                        up=true;
                    }
                    else
                    {
                       r++;
                       c--;
                    }
                }
            
        }
        return v;
    }
};