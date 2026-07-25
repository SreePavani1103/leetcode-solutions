class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
       map<int,int>m;
       int n=nums.size();
       m[0]=1;
       int p=0;
       int c=0;
       for(int i=0;i<n;i++)
       {
        p+=nums[i];
        if(m.find(p-k)!=m.end())
        {
            c+=m[p-k];
        }
        m[p]++;
       }
       return c;
    }
};