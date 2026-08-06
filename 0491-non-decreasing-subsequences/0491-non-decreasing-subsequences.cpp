class Solution {
public:
    vector<vector<int>> findSubsequences(vector<int>& nums) {
        vector<vector<int>>v;
        for(int i=0;i<(1<<nums.size());i++)
        {
            vector<int>v1;
            for(int j=0;j<nums.size();j++)
            {
                if(i&(1<<j))
                {
                   v1.push_back(nums[j]);
                }
            }
           v.push_back(v1);
        }
        vector<vector<int>>ans;
        for(int i=0;i<v.size();i++)
        {
            if(v[i].size()<=1)
            {
                continue;
            }
            bool f=true;
            for(int j=1;j<v[i].size();j++)
            {
                if(v[i][j]<v[i][j-1])
                {
                    f=false;
                    break;
                }
            }
            if(f)
            {
                ans.push_back(v[i]);
            }
        }
       set<vector<int>>s(ans.begin(),ans.end());
       ans.assign(s.begin(),s.end());
        return ans;

    }
};