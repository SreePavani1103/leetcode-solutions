class Solution {
public:
    vector<int> getMaximumXor(vector<int>& nums, int maximumBit) {
        vector<int>p(nums.size());
        p[0]=nums[0];
        for(int i=1;i<nums.size();i++)
        {
            p[i]=p[i-1]^nums[i];
        }
        int e=pow(2,maximumBit);
        vector<int>a;
        for(int i=p.size()-1;i>=0;i--)
        {
            a.push_back((e-1)^(p[i]));
        }
        return a;
        
    }
};