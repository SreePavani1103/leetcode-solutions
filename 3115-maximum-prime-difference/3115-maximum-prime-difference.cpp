
bool prime(int n)
{
    if(n<=1)
    return false;
    for(int i=2;i*i<=n;i++)
    {
        if(n%i==0)
        return false;
    }
      return true;
}

class Solution {
public:
    int maximumPrimeDifference(vector<int>& nums) {
        int j=0,l=0;
        for(int i=0;i<nums.size();i++)
        {
            if(prime(nums[i]))
            {
                j=i;
                break;
            }
        }
        for(int i=nums.size()-1;i>=0;i--)
        {
            if(prime(nums[i]))
            {
                l=i;
                break;
            }
        }
        return l-j;
    }
};