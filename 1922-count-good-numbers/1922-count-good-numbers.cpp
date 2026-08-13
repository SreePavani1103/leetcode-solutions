class Solution {
public:
int mod=1e9+7;
long long power(long long b,long long e)
{
   long long k=1;
    while(e>0)
    {
        if(((e)&1))
        {
            k=(k*b)%mod;
        }
       b=(b*b)%mod;
        e>>=1;
    }
    return  k%mod;
}
    int countGoodNumbers(long long n) {
        long long k=n/2;
        long long l=(n+1)/2;
      long long m=power(5,l)%mod;
      long long p=power(4,k)%mod;
      return (m*p)%mod;
    }
};