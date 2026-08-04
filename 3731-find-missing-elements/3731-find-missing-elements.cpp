class Solution {
public:
    vector<int> findMissingElements(vector<int>& nums) {
        int mi=nums[0];
        int mx=nums[0];
        for(int i=0;i<nums.size();i++)
            {
                mi=min(mi,nums[i]);
                mx=max(mx,nums[i]);
            }
        sort(nums.begin(),nums.end());
        vector<int>v;
       for(int i=1;i<nums.size();i++)
           {
               for(int j=nums[i-1]+1;j<nums[i];j++)
                   {
                       v.push_back(j);
                   }
           }
    
        return v;
    }
};