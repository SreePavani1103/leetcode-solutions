class Solution {
public:
    int minimumDeletions(vector<int>& nums) {
        int n=nums.size();
        int k=0,l=0;
        int maxn=nums[0],minn=nums[0];
        for(int i=0;i<n;i++)
        {
            maxn=max(maxn,nums[i]);
            minn=min(minn,nums[i]);
        }
        for(int i=0;i<n;i++)
        {
            if(nums[i]==maxn)
            {
                k=i;
            }
            if(nums[i]==minn)
            {
                l=i;
            }
        }
        if(k>l)
        swap(k,l);//l is max moves both max,min delete
        int ans=min({l+1,n-l+k+1,n-k});
        return ans;
    }
};