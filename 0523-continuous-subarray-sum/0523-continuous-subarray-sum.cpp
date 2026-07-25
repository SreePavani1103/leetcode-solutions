class Solution {
public:
    bool checkSubarraySum(vector<int>& nums, int k) {
        unordered_map<int,int>m;
        int n=nums.size();
        m[0]=-1;
        int p=0;
        for(int i=0;i<n;i++)
        {
            p+=nums[i];
           int rem=p%k;
            if(m.find(rem)!=m.end())
            {
            if(i-m[rem]>=2)
            {
                return true;
            }
            }
            else
            m[rem]=i;
            
        }
        return false;
    }
};