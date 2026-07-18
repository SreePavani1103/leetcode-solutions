class Solution {
public:
long long lcm(long long a,long long b)
{
    return (a/(gcd(a,b)))*b;
}
    long long maxScore(vector<int>& nums) {
        long long  ans=INT_MIN;
        long long l=1;
        long long g=0;
        for(int x:nums)
        {
             l=lcm(l,x);
           
             g=gcd(g,x);
        }
        ans=l*g;
        int n=nums.size();
        for(int i=0;i<n;i++)
        {
            l=1;
            g=0;
            for(int j=0;j<n;j++)
            {
                if(i==j)
                continue;
                l=lcm(l,nums[j]);
               
                
                    g=gcd(g,nums[j]);
                
            
            }
            ans=max(ans,l*g);
        }
        return ans;
    }
};