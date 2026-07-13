class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        vector<int>v;
        int n=matrix.size();
        int m=matrix[0].size();
        int i=0;
        int j=0;

         //left-right
         while(m>1 && n>1){
        for(int k=1;k<=(m-1);k++)
        {
            v.push_back(matrix[i][j]);
            j++;
        }
        //top bottom
        for(int k=1;k<=(n-1);k++)
        {
          v.push_back(matrix[i][j]);
            i++;
        }
        //   right left
        for(int k=1;k<=m-1;k++)
        {
          v.push_back(matrix[i][j]);
            j--;
        }
       // bottom top
       for(int k=1;k<=n-1;k++)
       {
      v.push_back(matrix[i][j]);
        i--;
       }
       n-=2;
       m-=2;
       i++;
       j++;
         }    

       if(n==1)
       {
        for(int k=0;k<m;k++){
              v.push_back(matrix[i][j]);
        j++;
        }

       }
      else  if(m==1)
       {
        for(int k=0;k<n;k++)
        {
           v.push_back(matrix[i][j]);
           i++;
        }
       }
      
         return v;
    }
};