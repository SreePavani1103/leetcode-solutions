class Solution {
public:
    int distinctPrimeFactors(vector<int>& nums) {
        int n=nums.size();
        set<int>s;
        for(int x:nums)
        {
            int k=x;
            for(int i=2;i*i<=k;i++)
            {
                if(k%i==0)
                {
                    s.insert(i);
                    while(k%i==0)
                     k=k/i;
                }
            }
            if(k>1)
            s.insert(k);
        }
        return s.size();
    }
};