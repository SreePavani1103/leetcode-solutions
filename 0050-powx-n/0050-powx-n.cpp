class Solution {
public:
    double myPow(double x, int n) {
         double k=1;
         long long a=n;
         if(n<0)
         {
            x=1/x;
            a=-a;
         }
         while(a>0)
         {
            if((1&(a)))
            {
                k=k*x;
            }
            x*=x;
            a>>=1;
         }
         return k;
    }
};