class Solution {
public:
    long long gcdSum(vector<int>& nums) {
      vector<int>p(nums.size());
      int n=nums.size();
      int cm=nums[0];
      p[0]=nums[0];
      for(int i=1;i<n;i++)
      {
        cm=max(cm,nums[i]);
        p[i]=gcd(nums[i],cm);
      }
       sort(p.begin(),p.end());
       if(p.size()%2!=0)
       p.erase(p.begin()+(p.size()/2));
       vector<int>v;
       int l=0;
       int r=p.size()-1;
       while(l<r)
       {
           v.push_back(gcd(p[l],p[r]));
           l++;
           r--;
       }
       long long s=0;
       for(int c:v)
       {
        s+=c;
       }
       return s;
    }
};