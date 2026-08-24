class Solution {
public:
  int is_prime(long long n)
  {
    if(n<=1)
    return 0;
    for(int i=2;i*i<=n;i++)
    {
        if(n%i==0)
        return 0;

    }
    return 1;
  }
    int primePalindrome(int n) {
        if(n>=8 && n<=11)
        return 11;
      for(int i=1;i<1000000;i++)
      {
         string s=to_string(i);
         string s1(s.rbegin(),s.rend());
          long long k=stoi(s+s1.substr(1));
          if(k>=n && is_prime(k))
          {
            return k;
          }
      }
     return 0;
    }
};