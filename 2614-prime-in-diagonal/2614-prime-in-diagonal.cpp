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
class Solution {
public:
    int diagonalPrime(vector<vector<int>>& nums) {
        int m=0;
        for(int i=0;i<nums.size();i++)
        {
            for(int j=0;j<nums[i].size();j++)
            {
                if(i==j or i+j==nums.size()-1)
                {
                    if(is_prime(nums[i][j]))
                    {
                        m=max(m,nums[i][j]);
                    }
                }
            }
        }
        return m;
    }
};