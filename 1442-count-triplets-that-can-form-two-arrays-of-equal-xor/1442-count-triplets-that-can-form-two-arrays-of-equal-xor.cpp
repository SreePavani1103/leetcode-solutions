class Solution {
public:
    int countTriplets(vector<int>& arr) {
        int c=0;
        int n=arr.size();
        for(int i=0;i<n;i++)
        {
            for(int j=i+1;j<n;j++)
            {
                
                  int a=0;
                    for(int x=i;x<=j-1;x++)
                    {
                        a^=arr[x];
                    }
                     int b=0;
                for(int k=j;k<n;k++)
                {
                        b^=arr[k];
                    if(a==b)
                    c++;
                }
                }
            }
        
    return c;
    }
};