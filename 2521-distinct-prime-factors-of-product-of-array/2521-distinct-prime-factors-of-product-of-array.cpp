bool is_prime(int n)
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
vector<int> prime_fact(int n)
{
    vector<int>v;
    for(int i=1;i<=n;i++)
    {
        if(n%i==0)
        {
            if(is_prime(i))
            {
                v.push_back(i);
            }
        }
    }
    return v;
}
class Solution {
public:
    int distinctPrimeFactors(vector<int>& nums) {
      vector<vector<int>>v;
        for(int i=0;i<nums.size();i++)
        {
             v.push_back(prime_fact(nums[i]));
        }
        set<int>s;
        for(int i=0;i<v.size();i++)
        {
            s.insert(v[i].begin(),v[i].end());
        }
        return s.size();
    }
};