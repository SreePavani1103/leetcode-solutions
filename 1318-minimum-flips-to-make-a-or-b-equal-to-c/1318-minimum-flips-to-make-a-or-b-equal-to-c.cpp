class Solution {
public:
    int minFlips(int a, int b, int c) {
        int cnt=0;
        while(a>0 || b>0 || c>0)
        {
            int k=(a&1);
            int l=(b&1);
            int m=(c&1);
            if(m==0)
            {
                cnt+=(k+l);
            }
            else
            {
                if(k==0 && l==0)
                {
                    cnt++;
                }
            }
            a=(a>>1);
            b=(b>>1);
            c=(c>>1);
        }
        return cnt;
    }
};