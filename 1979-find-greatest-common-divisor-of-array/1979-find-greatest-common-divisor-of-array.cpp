class Solution {
public:
    int findGCD(vector<int>& nums) {
        int n=nums.size();
        int a=nums[0];
        int b=nums[0];
        for(int i=0;i<n;i++)
        {
            a=max(nums[i],a);
            b=min(nums[i],b);
        }
        return gcd(a,b);
    }
};