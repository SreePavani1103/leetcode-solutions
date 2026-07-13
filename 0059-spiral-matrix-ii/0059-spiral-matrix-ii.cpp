class Solution {
public:
    vector<vector<int>> generateMatrix(int n) {
        vector<vector<int>>s(n,vector<int>(n,0));
        int i=0;
        int j=0;
        int num=1;
        while(n>1)
        {
            //l--r
           for(int k=1;k<=n-1;k++)
           {
            s[i][j]=num++;
            j++;
           }
           //t---b
           for(int k=1;k<=n-1;k++)
           {
            s[i][j]=num++;
            i++;
           }
           //r--l
           for(int k=1;k<=n-1;k++)
           {
            s[i][j]=num++;
            j--;
           }
           //b---t
           for(int k=1;k<=n-1;k++)
           {
            s[i][j]=num++;
            i--;
           }
           n-=2;
           i++;
           j++;
        }
        if(n==1)
      {
        s[i][j]=num++;
      }
      return s;
    }
};