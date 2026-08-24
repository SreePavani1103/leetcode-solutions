int t=1e7;
vector<bool>k(t,true);
bool see()
{
   k[0]=false;
   k[1]=false;
   for(int i=2;i*i<t;i++)
   {
    if(k[i])
    {
        for(int j=i*i;j<t;j+=i)
        {
            k[j]=false;
        }
    }
   }
   return true;
}
bool l = see();
class Solution {
public:
    int countPrimes(int n) {
        int c=0;
        for(int i=2;i<n;i++)
        {
            if(k[i])
            {
                c++;
            }
        }
        return c;
    }
};